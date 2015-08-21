#include "MayhemPunch.h"
#include "CPPGameInstance.h"




void UCPPGameInstance::Load() {
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "BeginPlay");
	HighscoreManager hsm;
}

void UCPPGameInstance::Save() {}

void UCPPGameInstance::HideMouse(bool Hide, APlayerController* PlayerController) {
	ULocalPlayer* player = Cast<ULocalPlayer>(PlayerController->GetNetOwningPlayer());
	FViewport* Viewport = player->ViewportClient->Viewport;
	
	if (Hide) {
		MousePositionX = Viewport->GetMouseX();
		MousePositionY = Viewport->GetMouseY();
		Viewport->SetMouse(0, 0);
		Change = true;
	}
	else if (Change) {
		PlayerController->SetInputMode(FInputModeUIOnly());
		Viewport->SetMouse(MousePositionX, MousePositionY);
		PlayerController->bShowMouseCursor = true;
		PlayerController->bEnableClickEvents = true;
		PlayerController->bEnableMouseOverEvents = true;
		Change = false;
	}
}