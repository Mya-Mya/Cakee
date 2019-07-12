#pragma once

class Layer;

enum StackingMode {
	Top,
	Above,
	Bottom
};

class ILayerManager
{
public:
	virtual void addLayer(Layer*you,Layer*layer,StackingMode sm) = 0;
	virtual void requireDelete(Layer*you) = 0;
	virtual void requireSwap(Layer*you, Layer*another) = 0;
};

