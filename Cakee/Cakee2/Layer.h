#pragma once

class Layer
{
public:
	virtual void update() = 0;
	virtual void draw() = 0;
	virtual bool canUndersUpdate() = 0;
};

