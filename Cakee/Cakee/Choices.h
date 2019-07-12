#pragma once
#include"Layer.h"
class Choices:public Layer
{
protected:
	int fontHandle;
	int bgColor;
	int clock = 0;
public:
	Choices(ILayerManager*manager);
	~Choices();
	void draw();
	void update();
};

