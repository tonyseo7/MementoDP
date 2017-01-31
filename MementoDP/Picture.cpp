#include "Picture.h"

Picture::Picture(string name, int tone, int brightness, int saturation)
{
	this->name = name;
	this->tone = tone;
	this->brightness = brightness;
	this->saturation = saturation;
}

void Picture::Change(int tone, int brightness, int saturation)
{
	this->tone += tone;
	this->brightness += brightness;
	this->saturation += saturation;
}

void Picture::View()const
{
	cout << "사진 파일명:" << name << endl;
	cout << "색조:" << tone << "명도:" << brightness << "채도:" << saturation << endl;

}

Snapshot *Picture::MakeSnapshot()
{
	return new Snapshot(tone, brightness, saturation);
}

void Picture::SetBySnapshot(Snapshot *snapshot)
{
	this->tone = snapshot->GetTone();
	this->brightness = snapshot->GetBrightness();
	this->saturation = snapshot->GetSaturation();
}

