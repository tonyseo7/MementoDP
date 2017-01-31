#include "App.h"

App::App(Picture *picture)
{

	mCurVecIndex = 0;
	cout << "사진을 설정합니다." << endl;
	picture->View();
	pSnapshot = picture->MakeSnapshot();			//snapshot 호출
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
	pSnapshot = pictures[mCurVecIndex]->MakeSnapshot();			//snapshot 호출
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

