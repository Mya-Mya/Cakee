#pragma once
#include"ILayerManager.h"

class Layer
{
protected:
	ILayerManager*manager;
public:
	virtual void update() = 0;
	virtual void draw() = 0;
	Layer(ILayerManager* manager) :manager(manager){};
};

