#include "MayhemPunch.h"
#include "CPPGameInstance.h"




void UCPPGameInstance::Load() {
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "BeginPlay");
	HighscoreManager hsm;
}

void UCPPGameInstance::Save() {}

void UCPPGameInstance::HideShowMouse(APlayerController* PlayerController) {
	ULocalPlayer* player = Cast<ULocalPlayer>(PlayerController->GetNetOwningPlayer());
	FViewport* Viewport = player->ViewportClient->Viewport;
	int32 tempMousePositionX = Viewport->GetMouseX();
	int32 tempMousePositionY = Viewport->GetMouseY();
	Viewport->SetMouse(MousePositionX, MousePositionY);
	MousePositionX = tempMousePositionX;
	MousePositionY = tempMousePositionY;
}