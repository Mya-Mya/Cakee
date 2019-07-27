#pragma once
#include<list>
#include<queue>
#include<map>
#include"Layer.h"
#include"StackingMode.h"
class LayerManager
{
protected:
	std::list<Layer*>layerList;
	std::list<Layer*>::reverse_iterator rItr;
	std::list<Layer*>::iterator itr;

	std::list<Layer*>deleteQue;
	std::map<Layer*, Layer*>swapQue;

	LayerManager();
	LayerManager(const LayerManager& l) {}
	LayerManager&operator=(const LayerManager& l) {}
	~LayerManager();
public:
	static LayerManager*inst() {
		static LayerManager instance;
		return &instance;
	}

	void mainLoop();
	void addLayer(Layer*you,Layer*layer, StackingMode sm);
	void requireDelete(Layer*you);
	void requireSwap(Layer*you, Layer*another);
};

