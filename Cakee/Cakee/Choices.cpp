#include "Choices.h"
#include<DxLib.h>
#include<iostream>

Choices::Choices(ILayerManager*manager)
	:Layer(manager)
{
	bgColor = GetColor(255, 100, 180);
	fontHandle = CreateFontToHandle("ÉÅÉCÉäÉI", 40, 5, DX_FONTTYPE_ANTIALIASING);
}


Choices::~Choices()
{
}

void Choices::draw()
{
	DrawBox(200, 100, 600, 400, bgColor, TRUE);
}

void Choices::update()
{
	clock++;
	std::cout << "Choices::update" << std::endl;
	if (clock == 40) {
		manager->requireDelete(this);
	}
}
