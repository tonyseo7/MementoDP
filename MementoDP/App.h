#pragma once
#include "Picture.h"

typedef vector<Picture*> vPictures;

class App
{
	vPictures pictures;
	Snapshot *pSnapshot;
	int mCurVecIndex;

public:
	App(Picture *picture);
	~App();
	void Change(int tone, int brightness, int saturation);
	void Cancel();
	void SetPicture(Picture *picture);
	void End();

};
