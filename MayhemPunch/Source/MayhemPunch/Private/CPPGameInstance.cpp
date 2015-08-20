#include "MayhemPunch.h"
#include "CPPGameInstance.h"




void UCPPGameInstance::Load() {
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "BeginPlay");
	HighscoreManager hsm;
}

void UCPPGameInstance::Save() {}

void UCPPGameInstance::SetMousePosition(ULocalPlayer* player, int32 X, int32 Y) {
	FViewport* Viewport = player->ViewportClient->Viewport;
	Viewport->SetMouse(X, Y);
}