#include "Snapshot.h"

Snapshot::Snapshot(int tone, int brightness, int saturation)
{
	this->tone = tone;
	this->brightness = brightness;
	this->saturation = saturation;
}

int Snapshot::GetTone()const
{
	return tone;
}


int Snapshot::GetBrightness()const
{
	return brightness;
}


int Snapshot::GetSaturation()const
{
	return saturation;
}