#include "App.h"

App::App(Picture *picture)
{
	mCurVecIndex = 0;
	pictures.push_back(picture);
}

App::~App()
{
	pictures.end();
}

void App::Change(int tone, int brightness, int saturation)
{
	pictures[mCurVecIndex]->Change(tone, brightness, saturation);
}


void App::Cancel()
{
	pictures.erase(pictures.begin(), pictures.begin()+mCurVecIndex);
}

void App::SetPicture(Picture *picture)
{

	pictures.push_back(picture);
	++mCurVecIndex;
}


void App::End()
{
	pictures.end();
}

