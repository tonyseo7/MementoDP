#include "App.h"

void main()
{
	Picture *picture = new Picture("구름에 달 가듯이", 100, 100, 100);
	Picture *picture2 = new Picture("가는 나그네", 100, 100, 100);

	App *app = new App(picture);
	app->Change(10, 20, -20);
	app->Change(10, 20, -20);
	app->Cancel();

	app->SetPicture(picture2);
	app->Change(10, 20, -20);
	app->Change(10, 20, -20);
	app->Cancel();
	app->End();

	delete app;
	delete picture;
}