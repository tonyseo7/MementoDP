#pragma once
#include "common.h"
#include "Snapshot.h"


class Picture
{
	string name;
	int tone;
	int brightness;
	int saturation;

public:
	Picture(string name, int tone, int brightness, int saturation);
	void Change(int tone, int brightness, int saturation);
	void View()const;
	Snapshot *MakeSnapshot();
	void SetBySnapshot(Snapshot *snapshot);
};
