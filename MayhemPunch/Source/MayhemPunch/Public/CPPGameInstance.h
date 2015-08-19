// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "Engine/GameInstance.h"
#include "CPPGameInstance.generated.h"

UENUM(BlueprintType)
enum class EGameState : uint8
{
	Startup		UMETA(DisplayName = "0  Startup"),
	Loading		UMETA(DisplayName = "1  Loading"),
	MainMenu	UMETA(DisplayName = "2  Main Menu"),
	Settings	UMETA(DisplayName = "3  Settings"),
	Highscore	UMETA(DisplayName = "4  Highscore"),
	HowToPlay	UMETA(DisplayName = "5  How To Play"),
	Error		UMETA(DisplayName = "6  Error"),
	Play		UMETA(DisplayName = "7  Play"),
	Credits		UMETA(DisplayName = "8  Credits"),
	Pause		UMETA(DisplayName = "9  Pause"),
	Controls	UMETA(DisplayName = "10 Controls")
};

UENUM(BlueprintType)
enum class EGraphics : uint8
{
	Low		UMETA(DisplayName = "Low"),
	Medium	UMETA(DisplayName = "Medium"),
	High	UMETA(DisplayName = "High"),
	Ultra	UMETA(DisplayName = "Ultra")
};

UCLASS()
class MAYHEMPUNCH_API UCPPGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
	
	
public:

	//---------//
	// METHODS //
	//---------//

	void BeginPlay();



	//-----------//
	// VARIABLES //
	//-----------//


	//--------//
	// Levels //
	//--------//

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Levels")
		FName MainMenu = "MainMenu";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Levels")
		FName Level1 = "PeliLevel";


	//---------//
	// Widgets //
	//---------//

	/*Menus*/

	/*Main Menu*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Menu Widget Classes")
		TSubclassOf<UUserWidget> MainMenu_WidgetClass;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Menu Widgets")
		UUserWidget* MainMenu_Widget;

	/*How To Play*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Menu Widget Classes")
		TSubclassOf<UUserWidget> HowToPlay_WidgetClass;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Menu Widgets")
		UUserWidget* HowToPlay_Widget;

	/*Controls*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Menu Widget Classes")
		TSubclassOf<UUserWidget> Controls_WidgetClass;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Menu Widgets")
		UUserWidget* Controls_Widget;

	/*Highscore*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Menu Widget Classes")
		TSubclassOf<UUserWidget> Highscore_WidgetClass;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Menu Widgets")
		UUserWidget* Highscore_Widget;

	/*Settings*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Menu Widget Classes")
		TSubclassOf<UUserWidget> Settings_WidgetClass;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Menu Widgets")
		UUserWidget* Settings_Widget;

	/*Credits*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Menu Widget Classes")
		TSubclassOf<UUserWidget> Credits_WidgetClass;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Menu Widgets")
		UUserWidget* Credits_Widget;


	/*Misc*/

	/*Loading Screen*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Misc Widget Classes")
		TSubclassOf<UUserWidget> LoadingScreen_WidgetClass;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Misc Widgets")
		UUserWidget* LoadingScreen_Widget;

	/*Error*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Misc Widget Classes")
		TSubclassOf<UUserWidget> Error_WidgetClass;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Misc Widgets")
		UUserWidget* Error_Widget;

	/*HUD*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Misc Widget Classes")
		TSubclassOf<UUserWidget> HUD_WidgetClass;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Misc Widgets")
		UUserWidget* HUD_Widget;

	/*Victory*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Misc Widget Classes")
		TSubclassOf<UUserWidget> Victory_WidgetClass;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Misc Widgets")
		UUserWidget* Victory_Widget;

	/*Pause*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Misc Widget Classes")
		TSubclassOf<UUserWidget> Pause_WidgetClass;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Misc Widgets")
		UUserWidget* Pause_Widget;

	/*Score Name*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Misc Widget Classes")
		TSubclassOf<UUserWidget> ScoreName_WidgetClass;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Misc Widgets")
		UUserWidget* ScoreName_Widget;


	//-----------//
	// Highscore //
	//-----------//

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Highscore")
		TArray<int32> SavedScore;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Highscore")
		TArray<FString> SavedName;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Highscore")
		TArray<FString> SaveSlotName;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Highscore")
		int32 DefaultScore = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Highscore")
		FString DefaultName = "Empty";

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Highscore")
		FString PlayerName = "Ass";


	//--------//
	// Volume //
	//--------//

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Volume")
		float Master;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Volume")
		float Music;


	//-------//
	// Misc. //
	//-------//

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		EGameState GameState;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		bool EnableLAN;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		int32 MaxNumberOfPlayers;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		int32 BotNumber;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		EGraphics Graphics;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		FString Settings = "Settings";

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		FString SetFullscreen = "r.SetRes 1280x720f";

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		FString SetWindowed = "r.SetRes 1280x720w";

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		bool Fullscreen;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		bool InvertedLookup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Misc.")
		USaveGame* SaveSettings;


	//----------//
	// Settings //
	//----------//

	/*Low*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Low Settings")
		FString LowResolution = "r.ScreenPercentage 25";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Low Settings")
		FString LowViewDistance = "r.ViewDistanceScale 0.25";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Low Settings")
		FString LowAntiAliasing = "r.PostProcessAAQuality 0";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Low Settings")
		FString LowPostProcess = "sg.PostProcessQuality 0";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Low Settings")
		FString LowShadow = "sg.ShadowQuality 0";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Low Settings")
		FString LowTexture = "sg.TextureQuality 0";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Low Settings")
		FString LowEffects = "sg.EffectsQuality 0";

	/*Medium*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Medium Settings")
		FString MediumResolution = "r.ScreenPercentage 50";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Medium Settings")
		FString MediumViewDistance = "r.ViewDistanceScale 0.5";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Medium Settings")
		FString MediumAntiAliasing = "r.PostProcessAAQuality 2";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Medium Settings")
		FString MediumPostProcess = "sg.PostProcessQuality 1";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Medium Settings")
		FString MediumShadow = "sg.ShadowQuality 1";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Medium Settings")
		FString MediumTexture = "sg.TextureQuality 1";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Medium Settings")
		FString MediumEffects = "sg.EffectsQuality 1";

	/*High*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "High Settings")
		FString HighResolution = "r.ScreenPercentage 75";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "High Settings")
		FString HighViewDistance = "r.ViewDistanceScale 0.75";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "High Settings")
		FString HighAntiAliasing = "r.PostProcessAAQuality 4";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "High Settings")
		FString HighPostProcess = "sg.PostProcessQuality 2";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "High Settings")
		FString HighShadow = "sg.ShadowQuality 2";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "High Settings")
		FString HighTexture = "sg.TextureQuality 2";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "High Settings")
		FString HighEffects = "sg.EffectsQuality 2";

	/*Ultra*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ultra Settings")
		FString UltraResolution = "r.ScreenPercentage 100";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ultra Settings")
		FString UltraViewDistance = "r.ViewDistanceScale 1";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ultra Settings")
		FString UltraAntiAliasing = "r.PostProcessAAQuality 6";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ultra Settings")
		FString UltraPostProcess = "sg.PostProcessQuality 3";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ultra Settings")
		FString UltraShadow = "sg.ShadowQuality 3";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ultra Settings")
		FString UltraTexture = "sg.TextureQuality 3";
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ultra Settings")
		FString UltraEffects = "sg.EffectsQuality 3";
};