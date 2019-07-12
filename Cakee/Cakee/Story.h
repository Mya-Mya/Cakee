#pragma once
#include"Layer.h"
class Story:public Layer
{
protected:
	int clock = 0;
	int fontHandle;
	int color;
	int bgColor;
public:
	Story(ILayerManager*manager);
	~Story();
	void draw();
	void update();
};

