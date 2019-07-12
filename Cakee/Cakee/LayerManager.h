#pragma once
#include"ILayerManager.h"
#include<list>
#include<queue>
#include<map>
#include"Layer.h"
class LayerManager:public ILayerManager
{
protected:
	std::list<Layer*>layerList;
	std::list<Layer*>::reverse_iterator rItr;
	std::list<Layer*>::iterator itr;

	std::list<Layer*>deleteQue;
	std::map<Layer*, Layer*>swapQue;
public:
	LayerManager();
	~LayerManager();
	void mainLoop();
	void addLayer(Layer*you,Layer*layer, StackingMode sm);
	void requireDelete(Layer*you);
	void requireSwap(Layer*you, Layer*another);
};

