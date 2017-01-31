#include "App.h"

App::App(Picture *picture)
{

	mCurVecIndex = 0;
	cout << "������ �����մϴ�." << endl;
	picture->View();
	pSnapshot = picture->MakeSnapshot();			//snapshot ȣ��
	pictures.push_back(picture);
	
}

App::~App()
{
	pictures.clear();
}

void App::Change(int tone, int brightness, int saturation)
{
	pictures[mCurVecIndex]->Change(tone, brightness, saturation);
	pictures[mCurVecIndex]->View();
	pSnapshot = pictures[mCurVecIndex]->MakeSnapshot();			//snapshot ȣ��
}


void App::Cancel()
{
	pictures[mCurVecIndex]->SetBySnapshot(pSnapshot);
	pictures[mCurVecIndex]->View();
	pictures.erase(pictures.begin(), pictures.begin()+mCurVecIndex);
	--mCurVecIndex;

}

void App::SetPicture(Picture *picture)
{

	pictures.push_back(picture);
	++mCurVecIndex;
}


void App::End()
{
	pictures.clear();
}

