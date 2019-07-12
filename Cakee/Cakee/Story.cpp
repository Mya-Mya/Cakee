#include "Story.h"
#include<DxLib.h>
#include<iostream>
#include"Choices.h"

Story::Story(ILayerManager*manager)
	:Layer(manager)
{
	fontHandle = CreateFontToHandle("ÉÅÉCÉäÉI", 30, 4, DX_FONTTYPE_ANTIALIASING);
	color = GetColor(255, 255, 255);
	bgColor = GetColor(130, 255, 170);
}


Story::~Story()
{
}

void Story::draw()
{
	DrawBox(0, 0, 800, 500, bgColor, TRUE);
	DrawFormatString(0, 0, GetColor(255, 255, 255), "Ç±ÇÒÇ…ÇøÇÕ");
}

void Story::update()
{
	clock++;
	std::cout << "Story::update" << std::endl;
	if (clock == 40) {
		manager->addLayer(this, new Choices(manager), StackingMode::Above);
	}
}
