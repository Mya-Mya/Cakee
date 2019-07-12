#include<DxLib.h>
#include"LayerManager.h"
#include"Story.h"
#include"Mouse.h"
int main() {
	SetGraphMode(800, 500, 16);
	ChangeWindowMode(TRUE);
	SetDrawScreen(DX_SCREEN_BACK);
	DxLib_Init();
	LayerManager lm;
	lm.addLayer(nullptr, new Story(&lm), StackingMode::Top);
	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {
		Mouse::Instance()->Update();
		lm.mainLoop();
	}
	DxLib_End();
	return 0;
}