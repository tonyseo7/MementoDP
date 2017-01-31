#pragma once

class Snapshot
{
	int tone;
	int brightness;
	int saturation;

public:
	Snapshot(int tone, int brightness, int saturation);
	int GetTone()const;
	int GetBrightness()const;
	int GetSaturation()const;
};
