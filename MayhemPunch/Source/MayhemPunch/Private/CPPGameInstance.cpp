#include "MayhemPunch.h"
#include "CPPGameInstance.h"




void UCPPGameInstance::Load() {
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Load");
	HighscoreManager hsm;
}

void UCPPGameInstance::Save() {}

void UCPPGameInstance::HideMouse(bool Hide, APlayerController* PlayerController) {
	ULocalPlayer* player = Cast<ULocalPlayer>(PlayerController->GetNetOwningPlayer());
	FViewport* Viewport = player->ViewportClient->Viewport;
	
	if (Hide) {
		PlayerController->bShowMouseCursor = false;
		MousePositionX = Viewport->GetMouseX();
		MousePositionY = Viewport->GetMouseY();
		Viewport->SetMouse(0, 0);
		Change = true;
	}
	else if (Change) {
		Viewport->SetMouse(MousePositionX, MousePositionY);
		PlayerController->bShowMouseCursor = true;
		PlayerController->bEnableClickEvents = true;
		PlayerController->bEnableMouseOverEvents = true;
		Change = false;
	}
}