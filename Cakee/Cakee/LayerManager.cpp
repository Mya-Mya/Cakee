#include "LayerManager.h"


LayerManager::LayerManager()
{
}

LayerManager::~LayerManager()
{
}

void LayerManager::mainLoop()
{
	//íœ—v¿‚Ì‚ ‚Á‚½Layer‚ðíœ
	if (!deleteQue.empty()) {
		for(Layer* target:deleteQue){
			layerList.remove(target);
			delete target;
		}
		deleteQue.clear();
	}
	
	for (rItr = layerList.rbegin(); rItr != layerList.rend(); rItr++) {
		(*rItr)->draw();
	}
	layerList.front()->update();
}

void LayerManager::addLayer(Layer*you,Layer * newLayer, StackingMode sm)
{
	switch (sm)
	{
	case Top:
		layerList.push_front(newLayer);
		break;
	case Above:
		for (itr = layerList.begin(); itr != layerList.end(); itr++) {
			if (*itr == you) {
				layerList.insert(itr, newLayer);
				break;
			}
		}
		break;
	case Bottom:
		layerList.push_back(newLayer);
		break;
	default:
		break;
	}
	
}

void LayerManager::requireDelete(Layer * you)
{
	deleteQue.push_back(you);
}

void LayerManager::requireSwap(Layer * you, Layer * another)
{
	addLayer(you, another, StackingMode::Above);
	requireDelete(you);
}
