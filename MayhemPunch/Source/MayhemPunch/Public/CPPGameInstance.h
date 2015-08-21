#pragma once

#include "HighscoreManager.h"
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

	//-----------//
	// FUNCTIONS //
	//-----------//

	/*Load*/
	UFUNCTION(BlueprintCallable, Category = "Banaanipojat")
		void Load();

	/*Save*/
	UFUNCTION(BlueprintCallable, Category = "Banaanipojat")
		void Save();

	/*Set Mouse Position*/
	UFUNCTION(BlueprintCallable, Category = "Banaanipojat")
		void HideMouse(bool Hide, APlayerController* PlayerController);



	//-----------//
	// VARIABLES //
	//-----------//


	//--------//
	// Levels //
	//--------//

	/*Main Menu*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Levels")
		FName MainMenu = "MainMenu";
	/*Level 1*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Levels")
		FName Level1 = "PeliLevel";


	//---------//
	// Widgets //
	//---------//

	/*Menus*/

	/*Main Menu Class*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Menu Widget Classes")
		TSubclassOf<UUserWidget> MainMenu_WidgetClass;
	/*Main Menu Widget*/
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Menu Widgets")
		UUserWidget* MainMenu_Widget;

	/*How To Play Class*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Menu Widget Classes")
		TSubclassOf<UUserWidget> HowToPlay_WidgetClass;
	/*How To Play Widget*/
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Menu Widgets")
		UUserWidget* HowToPlay_Widget;

	/*Controls Class*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Menu Widget Classes")
		TSubclassOf<UUserWidget> Controls_WidgetClass;
	/*Controls Widget*/
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Menu Widgets")
		UUserWidget* Controls_Widget;

	/*Highscore Class*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Menu Widget Classes")
		TSubclassOf<UUserWidget> Highscore_WidgetClass;
	/*Highscore Widget*/
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Menu Widgets")
		UUserWidget* Highscore_Widget;

	/*Settings Class*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Menu Widget Classes")
		TSubclassOf<UUserWidget> Settings_WidgetClass;
	/*Settings Widget*/
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Menu Widgets")
		UUserWidget* Settings_Widget;

	/*Credits Class*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Menu Widget Classes")
		TSubclassOf<UUserWidget> Credits_WidgetClass;
	/*Credits Widget*/
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Menu Widgets")
		UUserWidget* Credits_Widget;


	/*Misc*/

	/*Loading Screen Class*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Misc Widget Classes")
		TSubclassOf<UUserWidget> LoadingScreen_WidgetClass;
	/*Loading Screen Widget*/
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Misc Widgets")
		UUserWidget* LoadingScreen_Widget;

	/*Error Class*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Misc Widget Classes")
		TSubclassOf<UUserWidget> Error_WidgetClass;
	/*Error Widget*/
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Misc Widgets")
		UUserWidget* Error_Widget;

	/*HUD Class*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Misc Widget Classes")
		TSubclassOf<UUserWidget> HUD_WidgetClass;
	/*HUD Widget*/
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Misc Widgets")
		UUserWidget* HUD_Widget;

	/*Victory Class*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Misc Widget Classes")
		TSubclassOf<UUserWidget> Victory_WidgetClass;
	/*Victory Widget*/
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Misc Widgets")
		UUserWidget* Victory_Widget;

	/*Pause Class*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Misc Widget Classes")
		TSubclassOf<UUserWidget> Pause_WidgetClass;
	/*Pause Widget*/
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Misc Widgets")
		UUserWidget* Pause_Widget;

	/*Score Name Class*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Misc Widget Classes")
		TSubclassOf<UUserWidget> ScoreName_WidgetClass;
	/*Score Name Widget*/
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Misc Widgets")
		UUserWidget* ScoreName_Widget;


	//-----------//
	// Highscore //
	//-----------//

	/*Saved Scores*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Highscore")
		TArray<int32> SavedScore;

	/*Saved Names*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Highscore")
		TArray<FString> SavedName;

	/*Slots*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Highscore")
		TArray<FString> SaveSlotName;

	/*Default Score*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Highscore")
		int32 DefaultScore = 0;

	/*Default Name*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Highscore")
		FString DefaultName = "Empty";

	/*Player Name*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Highscore")
		FString PlayerName = "Ass";


	//--------//
	// Volume //
	//--------//

	/*Master Volume*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Volume")
		float Master;

	/*Music Volume*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Volume")
		float Music;


	//--------------//
	// Banaanipojat //
	//--------------//

	/*Mouse Position X*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Banaanipojat")
		int32 MousePositionX = 0;

	/*Mouse Position Y*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Banaanipojat")
		int32 MousePositionY = 0;

	bool Change = true;


	//-------//
	// Misc. //
	//-------//

	/*Current Game State*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		EGameState GameState;

	/*Enable LAN*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		bool EnableLAN;

	/*Maximum Number of Players*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		int32 MaxNumberOfPlayers;

	/*Bot Number - obsolete*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		int32 BotNumber;

	/*Graphics Quality*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Misc.")
		EGraphics Graphics;

	/*Name for Settings file*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		FString Settings = "Settings";

	/*Fullscreen*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		FString SetFullscreen = "r.SetRes 1280x720f";

	/*Windowed*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		FString SetWindowed = "r.SetRes 1280x720w";

	/*Fullscreen/Windowed*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		bool Fullscreen;

	/*Inverted Look*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Misc.")
		bool InvertedLookup;

	/*Save Settings*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Misc.")
		USaveGame* SaveSettings;


	//----------//
	// Settings //
	//----------//
	

	/*Low*/

	/*Low Resolution*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Low Settings")
		FString LowResolution = "r.ScreenPercentage 25";
	/*Low View Distance*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Low Settings")
		FString LowViewDistance = "r.ViewDistanceScale 0.25";
	/*Low Anti Aliasing*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Low Settings")
		FString LowAntiAliasing = "r.PostProcessAAQuality 0";
	/*Low Post Process*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Low Settings")
		FString LowPostProcess = "sg.PostProcessQuality 0";
	/*Low Shadow*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Low Settings")
		FString LowShadow = "sg.ShadowQuality 0";
	/*Low Texture*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Low Settings")
		FString LowTexture = "sg.TextureQuality 0";
	/*Low Effects*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Low Settings")
		FString LowEffects = "sg.EffectsQuality 0";


	/*Medium*/

	/*Medium Resolution*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Medium Settings")
		FString MediumResolution = "r.ScreenPercentage 50";
	/*Medium View Distance*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Medium Settings")
		FString MediumViewDistance = "r.ViewDistanceScale 0.5";
	/*Medium Anti Aliasing*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Medium Settings")
		FString MediumAntiAliasing = "r.PostProcessAAQuality 2";
	/*Medium Post Process*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Medium Settings")
		FString MediumPostProcess = "sg.PostProcessQuality 1";
	/*Medium Shadow*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Medium Settings")
		FString MediumShadow = "sg.ShadowQuality 1";
	/*Medium Texture*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Medium Settings")
		FString MediumTexture = "sg.TextureQuality 1";
	/*Medium Effects*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Medium Settings")
		FString MediumEffects = "sg.EffectsQuality 1";


	/*High*/

	/*High Resolution*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "High Settings")
		FString HighResolution = "r.ScreenPercentage 75";
	/*High View Distance*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "High Settings")
		FString HighViewDistance = "r.ViewDistanceScale 0.75";
	/*High Anti Aliasing*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "High Settings")
		FString HighAntiAliasing = "r.PostProcessAAQuality 4";
	/*High Post Process*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "High Settings")
		FString HighPostProcess = "sg.PostProcessQuality 2";
	/*High Shadow*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "High Settings")
		FString HighShadow = "sg.ShadowQuality 2";
	/*High Texture*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "High Settings")
		FString HighTexture = "sg.TextureQuality 2";
	/*High Effects*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "High Settings")
		FString HighEffects = "sg.EffectsQuality 2";


	/*Ultra*/

	/*Ultra Resolution*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ultra Settings")
		FString UltraResolution = "r.ScreenPercentage 100";
	/*Ultra View Distance*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ultra Settings")
		FString UltraViewDistance = "r.ViewDistanceScale 1";
	/*Ultra Anti Aliasing*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ultra Settings")
		FString UltraAntiAliasing = "r.PostProcessAAQuality 6";
	/*Ultra Post Process*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ultra Settings")
		FString UltraPostProcess = "sg.PostProcessQuality 3";
	/*Ultra Shadow*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ultra Settings")
		FString UltraShadow = "sg.ShadowQuality 3";
	/*Ultra Texture*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ultra Settings")
		FString UltraTexture = "sg.TextureQuality 3";
	/*Ultra Effects*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ultra Settings")
		FString UltraEffects = "sg.EffectsQuality 3";
};