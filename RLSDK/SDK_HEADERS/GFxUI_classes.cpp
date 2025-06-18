/*
#############################################################################################
# Rocket League (220224.66435.368596) SDK
# Generated with the UE3SDKGenerator v2.3.0
# ========================================================================================= #
# File: GFxUI_classes.cpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/itsbrank/UE3SDKGenerator, www.twitter.com/itsbrank
#############################################################################################
*/
#include "../SdkHeaders.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function GFxUI.GFxEngine.UpdateMovieLoadingInfo
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FLoadingMovieMapInfo    LoadingInfo                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UGFxEngine::UpdateMovieLoadingInfo(struct FLoadingMovieMapInfo& LoadingInfo)
{
	static UFunction* uFnUpdateMovieLoadingInfo = nullptr;

	if (!uFnUpdateMovieLoadingInfo)
	{
		uFnUpdateMovieLoadingInfo = UFunction::FindFunction("Function GFxUI.GFxEngine.UpdateMovieLoadingInfo");
	}

	UGFxEngine_execUpdateMovieLoadingInfo_Params UpdateMovieLoadingInfo_Params;
	memcpy_s(&UpdateMovieLoadingInfo_Params.LoadingInfo, sizeof(UpdateMovieLoadingInfo_Params.LoadingInfo), &LoadingInfo, sizeof(LoadingInfo));

	this->ProcessEvent(uFnUpdateMovieLoadingInfo, &UpdateMovieLoadingInfo_Params, nullptr);

	memcpy_s(&LoadingInfo, sizeof(LoadingInfo), &UpdateMovieLoadingInfo_Params.LoadingInfo, sizeof(UpdateMovieLoadingInfo_Params.LoadingInfo));
};

// Function GFxUI.GFxEngine.Tick
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGFxEngine::eventTick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GFxUI.GFxEngine.Tick");
	}

	UGFxEngine_eventTick_Params Tick_Params;
	memcpy_s(&Tick_Params.DeltaTime, sizeof(Tick_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
};

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGFxMoviePlayer*         Movie                          (CPF_Parm)
// class UGFxEvent_FSCommand*     Event                          (CPF_Parm)
// class FString                  Cmd                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxFSCmdHandler::eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, class FString Cmd, class FString Arg)
{
	static UFunction* uFnFSCommand = nullptr;

	if (!uFnFSCommand)
	{
		uFnFSCommand = UFunction::FindFunction("Function GFxUI.GFxFSCmdHandler.FSCommand");
	}

	UGFxFSCmdHandler_eventFSCommand_Params FSCommand_Params;
	memcpy_s(&FSCommand_Params.Movie, sizeof(FSCommand_Params.Movie), &Movie, sizeof(Movie));
	memcpy_s(&FSCommand_Params.Event, sizeof(FSCommand_Params.Event), &Event, sizeof(Event));
	memcpy_s(&FSCommand_Params.Cmd, sizeof(FSCommand_Params.Cmd), &Cmd, sizeof(Cmd));
	memcpy_s(&FSCommand_Params.Arg, sizeof(FSCommand_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnFSCommand, &FSCommand_Params, nullptr);

	return FSCommand_Params.ReturnValue;
};

// Function GFxUI.GFxInteraction.DebugInputKey
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// EInputEvent                    Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_Parm)
// bool                           bGamepad                       (CPF_Parm)

void UGFxInteraction::DebugInputKey(int32_t ControllerId, struct FName Key, EInputEvent Event, float AmountDepressed, bool bGamepad)
{
	static UFunction* uFnDebugInputKey = nullptr;

	if (!uFnDebugInputKey)
	{
		uFnDebugInputKey = UFunction::FindFunction("Function GFxUI.GFxInteraction.DebugInputKey");
	}

	UGFxInteraction_execDebugInputKey_Params DebugInputKey_Params;
	memcpy_s(&DebugInputKey_Params.ControllerId, sizeof(DebugInputKey_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&DebugInputKey_Params.Key, sizeof(DebugInputKey_Params.Key), &Key, sizeof(Key));
	memcpy_s(&DebugInputKey_Params.Event, sizeof(DebugInputKey_Params.Event), &Event, sizeof(Event));
	memcpy_s(&DebugInputKey_Params.AmountDepressed, sizeof(DebugInputKey_Params.AmountDepressed), &AmountDepressed, sizeof(AmountDepressed));
	DebugInputKey_Params.bGamepad = bGamepad;

	this->ProcessEvent(uFnDebugInputKey, &DebugInputKey_Params, nullptr);
};

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxInteraction::CloseAllMoviePlayers()
{
	static UFunction* uFnCloseAllMoviePlayers = nullptr;

	if (!uFnCloseAllMoviePlayers)
	{
		uFnCloseAllMoviePlayers = UFunction::FindFunction("Function GFxUI.GFxInteraction.CloseAllMoviePlayers");
	}

	UGFxInteraction_execCloseAllMoviePlayers_Params CloseAllMoviePlayers_Params;

	this->ProcessEvent(uFnCloseAllMoviePlayers, &CloseAllMoviePlayers_Params, nullptr);
};

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxInteraction::NotifySplitscreenLayoutChanged()
{
	static UFunction* uFnNotifySplitscreenLayoutChanged = nullptr;

	if (!uFnNotifySplitscreenLayoutChanged)
	{
		uFnNotifySplitscreenLayoutChanged = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged");
	}

	UGFxInteraction_execNotifySplitscreenLayoutChanged_Params NotifySplitscreenLayoutChanged_Params;

	this->ProcessEvent(uFnNotifySplitscreenLayoutChanged, &NotifySplitscreenLayoutChanged_Params, nullptr);
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PlayerIndex                    (CPF_Parm)
// class ULocalPlayer*            RemovedPlayer                  (CPF_Parm)

void UGFxInteraction::NotifyPlayerRemoved(int32_t PlayerIndex, class ULocalPlayer* RemovedPlayer)
{
	static UFunction* uFnNotifyPlayerRemoved = nullptr;

	if (!uFnNotifyPlayerRemoved)
	{
		uFnNotifyPlayerRemoved = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifyPlayerRemoved");
	}

	UGFxInteraction_execNotifyPlayerRemoved_Params NotifyPlayerRemoved_Params;
	memcpy_s(&NotifyPlayerRemoved_Params.PlayerIndex, sizeof(NotifyPlayerRemoved_Params.PlayerIndex), &PlayerIndex, sizeof(PlayerIndex));
	memcpy_s(&NotifyPlayerRemoved_Params.RemovedPlayer, sizeof(NotifyPlayerRemoved_Params.RemovedPlayer), &RemovedPlayer, sizeof(RemovedPlayer));

	this->ProcessEvent(uFnNotifyPlayerRemoved, &NotifyPlayerRemoved_Params, nullptr);
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PlayerIndex                    (CPF_Parm)
// class ULocalPlayer*            AddedPlayer                    (CPF_Parm)

void UGFxInteraction::NotifyPlayerAdded(int32_t PlayerIndex, class ULocalPlayer* AddedPlayer)
{
	static UFunction* uFnNotifyPlayerAdded = nullptr;

	if (!uFnNotifyPlayerAdded)
	{
		uFnNotifyPlayerAdded = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifyPlayerAdded");
	}

	UGFxInteraction_execNotifyPlayerAdded_Params NotifyPlayerAdded_Params;
	memcpy_s(&NotifyPlayerAdded_Params.PlayerIndex, sizeof(NotifyPlayerAdded_Params.PlayerIndex), &PlayerIndex, sizeof(PlayerIndex));
	memcpy_s(&NotifyPlayerAdded_Params.AddedPlayer, sizeof(NotifyPlayerAdded_Params.AddedPlayer), &AddedPlayer, sizeof(AddedPlayer));

	this->ProcessEvent(uFnNotifyPlayerAdded, &NotifyPlayerAdded_Params, nullptr);
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:

void UGFxInteraction::NotifyGameSessionEnded()
{
	static UFunction* uFnNotifyGameSessionEnded = nullptr;

	if (!uFnNotifyGameSessionEnded)
	{
		uFnNotifyGameSessionEnded = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifyGameSessionEnded");
	}

	UGFxInteraction_execNotifyGameSessionEnded_Params NotifyGameSessionEnded_Params;

	this->ProcessEvent(uFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Params, nullptr);
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxMoviePlayer*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)

class UGFxMoviePlayer* UGFxInteraction::GetFocusMovie(int32_t ControllerId)
{
	static UFunction* uFnGetFocusMovie = nullptr;

	if (!uFnGetFocusMovie)
	{
		uFnGetFocusMovie = UFunction::FindFunction("Function GFxUI.GFxInteraction.GetFocusMovie");
	}

	UGFxInteraction_execGetFocusMovie_Params GetFocusMovie_Params;
	memcpy_s(&GetFocusMovie_Params.ControllerId, sizeof(GetFocusMovie_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnGetFocusMovie, &GetFocusMovie_Params, nullptr);

	return GetFocusMovie_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetFullScreen
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bFullScreen                    (CPF_Parm)

void UGFxMoviePlayer::SetFullScreen(bool bFullScreen)
{
	static UFunction* uFnSetFullScreen = nullptr;

	if (!uFnSetFullScreen)
	{
		uFnSetFullScreen = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetFullScreen");
	}

	UGFxMoviePlayer_execSetFullScreen_Params SetFullScreen_Params;
	SetFullScreen_Params.bFullScreen = bFullScreen;

	this->ProcessEvent(uFnSetFullScreen, &SetFullScreen_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.IsHidden
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxMoviePlayer::IsHidden()
{
	static UFunction* uFnIsHidden = nullptr;

	if (!uFnIsHidden)
	{
		uFnIsHidden = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.IsHidden");
	}

	UGFxMoviePlayer_execIsHidden_Params IsHidden_Params;

	this->ProcessEvent(uFnIsHidden, &IsHidden_Params, nullptr);

	return IsHidden_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetHidden
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bHidden                        (CPF_Parm)

void UGFxMoviePlayer::SetHidden(bool bHidden)
{
	static UFunction* uFnSetHidden = nullptr;

	if (!uFnSetHidden)
	{
		uFnSetHidden = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetHidden");
	}

	UGFxMoviePlayer_execSetHidden_Params SetHidden_Params;
	SetHidden_Params.bHidden = bHidden;

	this->ProcessEvent(uFnSetHidden, &SetHidden_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.RenderOnce
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::RenderOnce()
{
	static UFunction* uFnRenderOnce = nullptr;

	if (!uFnRenderOnce)
	{
		uFnRenderOnce = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.RenderOnce");
	}

	UGFxMoviePlayer_execRenderOnce_Params RenderOnce_Params;

	this->ProcessEvent(uFnRenderOnce, &RenderOnce_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::UpdateSplitscreenLayout()
{
	static UFunction* uFnUpdateSplitscreenLayout = nullptr;

	if (!uFnUpdateSplitscreenLayout)
	{
		uFnUpdateSplitscreenLayout = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout");
	}

	UGFxMoviePlayer_execUpdateSplitscreenLayout_Params UpdateSplitscreenLayout_Params;

	this->ProcessEvent(uFnUpdateSplitscreenLayout, &UpdateSplitscreenLayout_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bRemoveEffect                  (CPF_Parm)

void UGFxMoviePlayer::ApplyPriorityVisibilityEffect(bool bRemoveEffect)
{
	static UFunction* uFnApplyPriorityVisibilityEffect = nullptr;

	if (!uFnApplyPriorityVisibilityEffect)
	{
		uFnApplyPriorityVisibilityEffect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect");
	}

	UGFxMoviePlayer_execApplyPriorityVisibilityEffect_Params ApplyPriorityVisibilityEffect_Params;
	ApplyPriorityVisibilityEffect_Params.bRemoveEffect = bRemoveEffect;

	this->ProcessEvent(uFnApplyPriorityVisibilityEffect, &ApplyPriorityVisibilityEffect_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bRemoveEffect                  (CPF_Parm)

void UGFxMoviePlayer::ApplyPriorityBlurEffect(bool bRemoveEffect)
{
	static UFunction* uFnApplyPriorityBlurEffect = nullptr;

	if (!uFnApplyPriorityBlurEffect)
	{
		uFnApplyPriorityBlurEffect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect");
	}

	UGFxMoviePlayer_execApplyPriorityBlurEffect_Params ApplyPriorityBlurEffect_Params;
	ApplyPriorityBlurEffect_Params.bRemoveEffect = bRemoveEffect;

	this->ProcessEvent(uFnApplyPriorityBlurEffect, &ApplyPriorityBlurEffect_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bRequestedBlurState            (CPF_Parm)
// bool                           bRequestedHiddenState          (CPF_Parm)

void UGFxMoviePlayer::eventApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState)
{
	static UFunction* uFnApplyPriorityEffect = nullptr;

	if (!uFnApplyPriorityEffect)
	{
		uFnApplyPriorityEffect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect");
	}

	UGFxMoviePlayer_eventApplyPriorityEffect_Params ApplyPriorityEffect_Params;
	ApplyPriorityEffect_Params.bRequestedBlurState = bRequestedBlurState;
	ApplyPriorityEffect_Params.bRequestedHiddenState = bRequestedHiddenState;

	this->ProcessEvent(uFnApplyPriorityEffect, &ApplyPriorityEffect_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
// [0x00024802] (FUNC_RequiredAPI | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   EventName                      (CPF_Parm)
// struct FName                   SoundThemeName                 (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::eventPlaySoundFromTheme(struct FName EventName, struct FName SoundThemeName)
{
	static UFunction* uFnPlaySoundFromTheme = nullptr;

	if (!uFnPlaySoundFromTheme)
	{
		uFnPlaySoundFromTheme = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme");
	}

	UGFxMoviePlayer_eventPlaySoundFromTheme_Params PlaySoundFromTheme_Params;
	memcpy_s(&PlaySoundFromTheme_Params.EventName, sizeof(PlaySoundFromTheme_Params.EventName), &EventName, sizeof(EventName));
	memcpy_s(&PlaySoundFromTheme_Params.SoundThemeName, sizeof(PlaySoundFromTheme_Params.SoundThemeName), &SoundThemeName, sizeof(SoundThemeName));

	this->ProcessEvent(uFnPlaySoundFromTheme, &PlaySoundFromTheme_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.OnFocusLost
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerIndex               (CPF_Parm)

void UGFxMoviePlayer::eventOnFocusLost(int32_t LocalPlayerIndex)
{
	static UFunction* uFnOnFocusLost = nullptr;

	if (!uFnOnFocusLost)
	{
		uFnOnFocusLost = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnFocusLost");
	}

	UGFxMoviePlayer_eventOnFocusLost_Params OnFocusLost_Params;
	memcpy_s(&OnFocusLost_Params.LocalPlayerIndex, sizeof(OnFocusLost_Params.LocalPlayerIndex), &LocalPlayerIndex, sizeof(LocalPlayerIndex));

	this->ProcessEvent(uFnOnFocusLost, &OnFocusLost_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.OnFocusGained
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerIndex               (CPF_Parm)

void UGFxMoviePlayer::eventOnFocusGained(int32_t LocalPlayerIndex)
{
	static UFunction* uFnOnFocusGained = nullptr;

	if (!uFnOnFocusGained)
	{
		uFnOnFocusGained = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnFocusGained");
	}

	UGFxMoviePlayer_eventOnFocusGained_Params OnFocusGained_Params;
	memcpy_s(&OnFocusGained_Params.LocalPlayerIndex, sizeof(OnFocusGained_Params.LocalPlayerIndex), &LocalPlayerIndex, sizeof(LocalPlayerIndex));

	this->ProcessEvent(uFnOnFocusGained, &OnFocusGained_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Command                        (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::ConsoleCommand(class FString Command)
{
	static UFunction* uFnConsoleCommand = nullptr;

	if (!uFnConsoleCommand)
	{
		uFnConsoleCommand = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ConsoleCommand");
	}

	UGFxMoviePlayer_execConsoleCommand_Params ConsoleCommand_Params;
	memcpy_s(&ConsoleCommand_Params.Command, sizeof(ConsoleCommand_Params.Command), &Command, sizeof(Command));

	this->ProcessEvent(uFnConsoleCommand, &ConsoleCommand_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.GetPC
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class APlayerController* UGFxMoviePlayer::eventGetPC()
{
	static UFunction* uFnGetPC = nullptr;

	if (!uFnGetPC)
	{
		uFnGetPC = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetPC");
	}

	UGFxMoviePlayer_eventGetPC_Params GetPC_Params;

	this->ProcessEvent(uFnGetPC, &GetPC_Params, nullptr);

	return GetPC_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetLP
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class ULocalPlayer*            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class ULocalPlayer* UGFxMoviePlayer::eventGetLP()
{
	static UFunction* uFnGetLP = nullptr;

	if (!uFnGetLP)
	{
		uFnGetLP = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetLP");
	}

	UGFxMoviePlayer_eventGetLP_Params GetLP_Params;

	this->ProcessEvent(uFnGetLP, &GetLP_Params, nullptr);

	return GetLP_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.Init
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class ULocalPlayer*            LocPlay                        (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::Init(class ULocalPlayer* LocPlay)
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Init");
	}

	UGFxMoviePlayer_execInit_Params Init_Params;
	memcpy_s(&Init_Params.LocPlay, sizeof(Init_Params.LocPlay), &LocPlay, sizeof(LocPlay));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              WidgetToBind                   (CPF_Parm)
// struct FName                   Path                           (CPF_Parm)

void UGFxMoviePlayer::SetWidgetPathBinding(class UGFxObject* WidgetToBind, struct FName Path)
{
	static UFunction* uFnSetWidgetPathBinding = nullptr;

	if (!uFnSetWidgetPathBinding)
	{
		uFnSetWidgetPathBinding = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding");
	}

	UGFxMoviePlayer_execSetWidgetPathBinding_Params SetWidgetPathBinding_Params;
	memcpy_s(&SetWidgetPathBinding_Params.WidgetToBind, sizeof(SetWidgetPathBinding_Params.WidgetToBind), &WidgetToBind, sizeof(WidgetToBind));
	memcpy_s(&SetWidgetPathBinding_Params.Path, sizeof(SetWidgetPathBinding_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnSetWidgetPathBinding, &SetWidgetPathBinding_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventPostWidgetInit()
{
	static UFunction* uFnPostWidgetInit = nullptr;

	if (!uFnPostWidgetInit)
	{
		uFnPostWidgetInit = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.PostWidgetInit");
	}

	UGFxMoviePlayer_eventPostWidgetInit_Params PostWidgetInit_Params;

	this->ProcessEvent(uFnPostWidgetInit, &PostWidgetInit_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxMoviePlayer::eventWidgetUnloaded(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetUnloaded = nullptr;

	if (!uFnWidgetUnloaded)
	{
		uFnWidgetUnloaded = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.WidgetUnloaded");
	}

	UGFxMoviePlayer_eventWidgetUnloaded_Params WidgetUnloaded_Params;
	memcpy_s(&WidgetUnloaded_Params.WidgetName, sizeof(WidgetUnloaded_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetUnloaded_Params.WidgetPath, sizeof(WidgetUnloaded_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetUnloaded_Params.Widget, sizeof(WidgetUnloaded_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetUnloaded, &WidgetUnloaded_Params, nullptr);

	return WidgetUnloaded_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxMoviePlayer::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.WidgetInitialized");
	}

	UGFxMoviePlayer_eventWidgetInitialized_Params WidgetInitialized_Params;
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptConstructor
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ClassName                      (CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxMoviePlayer::ActionScriptConstructor(class FString ClassName)
{
	static UFunction* uFnActionScriptConstructor = nullptr;

	if (!uFnActionScriptConstructor)
	{
		uFnActionScriptConstructor = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptConstructor");
	}

	UGFxMoviePlayer_execActionScriptConstructor_Params ActionScriptConstructor_Params;
	memcpy_s(&ActionScriptConstructor_Params.ClassName, sizeof(ActionScriptConstructor_Params.ClassName), &ClassName, sizeof(ClassName));

	this->ProcessEvent(uFnActionScriptConstructor, &ActionScriptConstructor_Params, nullptr);

	return ActionScriptConstructor_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxMoviePlayer::ActionScriptObject(class FString Path)
{
	static UFunction* uFnActionScriptObject = nullptr;

	if (!uFnActionScriptObject)
	{
		uFnActionScriptObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptObject");
	}

	UGFxMoviePlayer_execActionScriptObject_Params ActionScriptObject_Params;
	memcpy_s(&ActionScriptObject_Params.Path, sizeof(ActionScriptObject_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnActionScriptObject, &ActionScriptObject_Params, nullptr);

	return ActionScriptObject_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

class FString UGFxMoviePlayer::ActionScriptString(class FString Path)
{
	static UFunction* uFnActionScriptString = nullptr;

	if (!uFnActionScriptString)
	{
		uFnActionScriptString = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptString");
	}

	UGFxMoviePlayer_execActionScriptString_Params ActionScriptString_Params;
	memcpy_s(&ActionScriptString_Params.Path, sizeof(ActionScriptString_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnActionScriptString, &ActionScriptString_Params, nullptr);

	return ActionScriptString_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

float UGFxMoviePlayer::ActionScriptFloat(class FString Path)
{
	static UFunction* uFnActionScriptFloat = nullptr;

	if (!uFnActionScriptFloat)
	{
		uFnActionScriptFloat = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptFloat");
	}

	UGFxMoviePlayer_execActionScriptFloat_Params ActionScriptFloat_Params;
	memcpy_s(&ActionScriptFloat_Params.Path, sizeof(ActionScriptFloat_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnActionScriptFloat, &ActionScriptFloat_Params, nullptr);

	return ActionScriptFloat_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

int32_t UGFxMoviePlayer::ActionScriptInt(class FString Path)
{
	static UFunction* uFnActionScriptInt = nullptr;

	if (!uFnActionScriptInt)
	{
		uFnActionScriptInt = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptInt");
	}

	UGFxMoviePlayer_execActionScriptInt_Params ActionScriptInt_Params;
	memcpy_s(&ActionScriptInt_Params.Path, sizeof(ActionScriptInt_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnActionScriptInt, &ActionScriptInt_Params, nullptr);

	return ActionScriptInt_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::ActionScriptVoid(class FString Path)
{
	static UFunction* uFnActionScriptVoid = nullptr;

	if (!uFnActionScriptVoid)
	{
		uFnActionScriptVoid = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptVoid");
	}

	UGFxMoviePlayer_execActionScriptVoid_Params ActionScriptVoid_Params;
	memcpy_s(&ActionScriptVoid_Params.Path, sizeof(ActionScriptVoid_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnActionScriptVoid, &ActionScriptVoid_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.Invoke
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  method                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FASValue>        args                           (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxMoviePlayer::Invoke(class FString method, TArray<struct FASValue> args)
{
	static UFunction* uFnInvoke = nullptr;

	if (!uFnInvoke)
	{
		uFnInvoke = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Invoke");
	}

	UGFxMoviePlayer_execInvoke_Params Invoke_Params;
	memcpy_s(&Invoke_Params.method, sizeof(Invoke_Params.method), &method, sizeof(method));
	memcpy_s(&Invoke_Params.args, sizeof(Invoke_Params.args), &args, sizeof(args));

	this->ProcessEvent(uFnInvoke, &Invoke_Params, nullptr);

	return Invoke_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              Object                         (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::ActionScriptSetFunction(class UGFxObject* Object, class FString Member)
{
	static UFunction* uFnActionScriptSetFunction = nullptr;

	if (!uFnActionScriptSetFunction)
	{
		uFnActionScriptSetFunction = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction");
	}

	UGFxMoviePlayer_execActionScriptSetFunction_Params ActionScriptSetFunction_Params;
	memcpy_s(&ActionScriptSetFunction_Params.Object, sizeof(ActionScriptSetFunction_Params.Object), &Object, sizeof(Object));
	memcpy_s(&ActionScriptSetFunction_Params.Member, sizeof(ActionScriptSetFunction_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnActionScriptSetFunction, &ActionScriptSetFunction_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.CreateArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGFxObject* UGFxMoviePlayer::CreateArray()
{
	static UFunction* uFnCreateArray = nullptr;

	if (!uFnCreateArray)
	{
		uFnCreateArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.CreateArray");
	}

	UGFxMoviePlayer_execCreateArray_Params CreateArray_Params;

	this->ProcessEvent(uFnCreateArray, &CreateArray_Params, nullptr);

	return CreateArray_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.CreateObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ASClass                        (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)
// TArray<struct FASValue>        args                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxMoviePlayer::CreateObject(class FString ASClass, class UClass* Type, TArray<struct FASValue> args)
{
	static UFunction* uFnCreateObject = nullptr;

	if (!uFnCreateObject)
	{
		uFnCreateObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.CreateObject");
	}

	UGFxMoviePlayer_execCreateObject_Params CreateObject_Params;
	memcpy_s(&CreateObject_Params.ASClass, sizeof(CreateObject_Params.ASClass), &ASClass, sizeof(ASClass));
	memcpy_s(&CreateObject_Params.Type, sizeof(CreateObject_Params.Type), &Type, sizeof(Type));
	memcpy_s(&CreateObject_Params.args, sizeof(CreateObject_Params.args), &args, sizeof(args));

	this->ProcessEvent(uFnCreateObject, &CreateObject_Params, nullptr);

	return CreateObject_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// TArray<class FString>          Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableStringArray(class FString Path, int32_t Index, TArray<class FString> Arg)
{
	static UFunction* uFnSetVariableStringArray = nullptr;

	if (!uFnSetVariableStringArray)
	{
		uFnSetVariableStringArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableStringArray");
	}

	UGFxMoviePlayer_execSetVariableStringArray_Params SetVariableStringArray_Params;
	memcpy_s(&SetVariableStringArray_Params.Path, sizeof(SetVariableStringArray_Params.Path), &Path, sizeof(Path));
	memcpy_s(&SetVariableStringArray_Params.Index, sizeof(SetVariableStringArray_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetVariableStringArray_Params.Arg, sizeof(SetVariableStringArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSetVariableStringArray, &SetVariableStringArray_Params, nullptr);

	return SetVariableStringArray_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// TArray<float>                  Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableFloatArray(class FString Path, int32_t Index, TArray<float> Arg)
{
	static UFunction* uFnSetVariableFloatArray = nullptr;

	if (!uFnSetVariableFloatArray)
	{
		uFnSetVariableFloatArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableFloatArray");
	}

	UGFxMoviePlayer_execSetVariableFloatArray_Params SetVariableFloatArray_Params;
	memcpy_s(&SetVariableFloatArray_Params.Path, sizeof(SetVariableFloatArray_Params.Path), &Path, sizeof(Path));
	memcpy_s(&SetVariableFloatArray_Params.Index, sizeof(SetVariableFloatArray_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetVariableFloatArray_Params.Arg, sizeof(SetVariableFloatArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSetVariableFloatArray, &SetVariableFloatArray_Params, nullptr);

	return SetVariableFloatArray_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// TArray<int32_t>                Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableIntArray(class FString Path, int32_t Index, TArray<int32_t> Arg)
{
	static UFunction* uFnSetVariableIntArray = nullptr;

	if (!uFnSetVariableIntArray)
	{
		uFnSetVariableIntArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableIntArray");
	}

	UGFxMoviePlayer_execSetVariableIntArray_Params SetVariableIntArray_Params;
	memcpy_s(&SetVariableIntArray_Params.Path, sizeof(SetVariableIntArray_Params.Path), &Path, sizeof(Path));
	memcpy_s(&SetVariableIntArray_Params.Index, sizeof(SetVariableIntArray_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetVariableIntArray_Params.Arg, sizeof(SetVariableIntArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSetVariableIntArray, &SetVariableIntArray_Params, nullptr);

	return SetVariableIntArray_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// TArray<struct FASValue>        Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableArray(class FString Path, int32_t Index, TArray<struct FASValue> Arg)
{
	static UFunction* uFnSetVariableArray = nullptr;

	if (!uFnSetVariableArray)
	{
		uFnSetVariableArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableArray");
	}

	UGFxMoviePlayer_execSetVariableArray_Params SetVariableArray_Params;
	memcpy_s(&SetVariableArray_Params.Path, sizeof(SetVariableArray_Params.Path), &Path, sizeof(Path));
	memcpy_s(&SetVariableArray_Params.Index, sizeof(SetVariableArray_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetVariableArray_Params.Arg, sizeof(SetVariableArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSetVariableArray, &SetVariableArray_Params, nullptr);

	return SetVariableArray_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// TArray<class FString>          Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableStringArray(class FString Path, int32_t Index, TArray<class FString>& Arg)
{
	static UFunction* uFnGetVariableStringArray = nullptr;

	if (!uFnGetVariableStringArray)
	{
		uFnGetVariableStringArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableStringArray");
	}

	UGFxMoviePlayer_execGetVariableStringArray_Params GetVariableStringArray_Params;
	memcpy_s(&GetVariableStringArray_Params.Path, sizeof(GetVariableStringArray_Params.Path), &Path, sizeof(Path));
	memcpy_s(&GetVariableStringArray_Params.Index, sizeof(GetVariableStringArray_Params.Index), &Index, sizeof(Index));
	memcpy_s(&GetVariableStringArray_Params.Arg, sizeof(GetVariableStringArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnGetVariableStringArray, &GetVariableStringArray_Params, nullptr);

	memcpy_s(&Arg, sizeof(Arg), &GetVariableStringArray_Params.Arg, sizeof(GetVariableStringArray_Params.Arg));

	return GetVariableStringArray_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// TArray<float>                  Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableFloatArray(class FString Path, int32_t Index, TArray<float>& Arg)
{
	static UFunction* uFnGetVariableFloatArray = nullptr;

	if (!uFnGetVariableFloatArray)
	{
		uFnGetVariableFloatArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableFloatArray");
	}

	UGFxMoviePlayer_execGetVariableFloatArray_Params GetVariableFloatArray_Params;
	memcpy_s(&GetVariableFloatArray_Params.Path, sizeof(GetVariableFloatArray_Params.Path), &Path, sizeof(Path));
	memcpy_s(&GetVariableFloatArray_Params.Index, sizeof(GetVariableFloatArray_Params.Index), &Index, sizeof(Index));
	memcpy_s(&GetVariableFloatArray_Params.Arg, sizeof(GetVariableFloatArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnGetVariableFloatArray, &GetVariableFloatArray_Params, nullptr);

	memcpy_s(&Arg, sizeof(Arg), &GetVariableFloatArray_Params.Arg, sizeof(GetVariableFloatArray_Params.Arg));

	return GetVariableFloatArray_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// TArray<int32_t>                Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableIntArray(class FString Path, int32_t Index, TArray<int32_t>& Arg)
{
	static UFunction* uFnGetVariableIntArray = nullptr;

	if (!uFnGetVariableIntArray)
	{
		uFnGetVariableIntArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableIntArray");
	}

	UGFxMoviePlayer_execGetVariableIntArray_Params GetVariableIntArray_Params;
	memcpy_s(&GetVariableIntArray_Params.Path, sizeof(GetVariableIntArray_Params.Path), &Path, sizeof(Path));
	memcpy_s(&GetVariableIntArray_Params.Index, sizeof(GetVariableIntArray_Params.Index), &Index, sizeof(Index));
	memcpy_s(&GetVariableIntArray_Params.Arg, sizeof(GetVariableIntArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnGetVariableIntArray, &GetVariableIntArray_Params, nullptr);

	memcpy_s(&Arg, sizeof(Arg), &GetVariableIntArray_Params.Arg, sizeof(GetVariableIntArray_Params.Arg));

	return GetVariableIntArray_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableArray
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// TArray<struct FASValue>        Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableArray(class FString Path, int32_t Index, TArray<struct FASValue>& Arg)
{
	static UFunction* uFnGetVariableArray = nullptr;

	if (!uFnGetVariableArray)
	{
		uFnGetVariableArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableArray");
	}

	UGFxMoviePlayer_execGetVariableArray_Params GetVariableArray_Params;
	memcpy_s(&GetVariableArray_Params.Path, sizeof(GetVariableArray_Params.Path), &Path, sizeof(Path));
	memcpy_s(&GetVariableArray_Params.Index, sizeof(GetVariableArray_Params.Index), &Index, sizeof(Index));
	memcpy_s(&GetVariableArray_Params.Arg, sizeof(GetVariableArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnGetVariableArray, &GetVariableArray_Params, nullptr);

	memcpy_s(&Arg, sizeof(Arg), &GetVariableArray_Params.Arg, sizeof(GetVariableArray_Params.Arg));

	return GetVariableArray_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              Object                         (CPF_Parm)

void UGFxMoviePlayer::SetVariableObject(class FString Path, class UGFxObject* Object)
{
	static UFunction* uFnSetVariableObject = nullptr;

	if (!uFnSetVariableObject)
	{
		uFnSetVariableObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableObject");
	}

	UGFxMoviePlayer_execSetVariableObject_Params SetVariableObject_Params;
	memcpy_s(&SetVariableObject_Params.Path, sizeof(SetVariableObject_Params.Path), &Path, sizeof(Path));
	memcpy_s(&SetVariableObject_Params.Object, sizeof(SetVariableObject_Params.Object), &Object, sizeof(Object));

	this->ProcessEvent(uFnSetVariableObject, &SetVariableObject_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetVariableString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::SetVariableString(class FString Path, class FString S)
{
	static UFunction* uFnSetVariableString = nullptr;

	if (!uFnSetVariableString)
	{
		uFnSetVariableString = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableString");
	}

	UGFxMoviePlayer_execSetVariableString_Params SetVariableString_Params;
	memcpy_s(&SetVariableString_Params.Path, sizeof(SetVariableString_Params.Path), &Path, sizeof(Path));
	memcpy_s(&SetVariableString_Params.S, sizeof(SetVariableString_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnSetVariableString, &SetVariableString_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetVariableInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)

void UGFxMoviePlayer::SetVariableInt(class FString Path, int32_t I)
{
	static UFunction* uFnSetVariableInt = nullptr;

	if (!uFnSetVariableInt)
	{
		uFnSetVariableInt = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableInt");
	}

	UGFxMoviePlayer_execSetVariableInt_Params SetVariableInt_Params;
	memcpy_s(&SetVariableInt_Params.Path, sizeof(SetVariableInt_Params.Path), &Path, sizeof(Path));
	memcpy_s(&SetVariableInt_Params.I, sizeof(SetVariableInt_Params.I), &I, sizeof(I));

	this->ProcessEvent(uFnSetVariableInt, &SetVariableInt_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// float                          F                              (CPF_Parm)

void UGFxMoviePlayer::SetVariableNumber(class FString Path, float F)
{
	static UFunction* uFnSetVariableNumber = nullptr;

	if (!uFnSetVariableNumber)
	{
		uFnSetVariableNumber = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableNumber");
	}

	UGFxMoviePlayer_execSetVariableNumber_Params SetVariableNumber_Params;
	memcpy_s(&SetVariableNumber_Params.Path, sizeof(SetVariableNumber_Params.Path), &Path, sizeof(Path));
	memcpy_s(&SetVariableNumber_Params.F, sizeof(SetVariableNumber_Params.F), &F, sizeof(F));

	this->ProcessEvent(uFnSetVariableNumber, &SetVariableNumber_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetVariableBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// bool                           B                              (CPF_Parm)

void UGFxMoviePlayer::SetVariableBool(class FString Path, bool B)
{
	static UFunction* uFnSetVariableBool = nullptr;

	if (!uFnSetVariableBool)
	{
		uFnSetVariableBool = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableBool");
	}

	UGFxMoviePlayer_execSetVariableBool_Params SetVariableBool_Params;
	memcpy_s(&SetVariableBool_Params.Path, sizeof(SetVariableBool_Params.Path), &Path, sizeof(Path));
	SetVariableBool_Params.B = B;

	this->ProcessEvent(uFnSetVariableBool, &SetVariableBool_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetVariable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::SetVariable(class FString Path, struct FASValue Arg)
{
	static UFunction* uFnSetVariable = nullptr;

	if (!uFnSetVariable)
	{
		uFnSetVariable = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariable");
	}

	UGFxMoviePlayer_execSetVariable_Params SetVariable_Params;
	memcpy_s(&SetVariable_Params.Path, sizeof(SetVariable_Params.Path), &Path, sizeof(Path));
	memcpy_s(&SetVariable_Params.Arg, sizeof(SetVariable_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSetVariable, &SetVariable_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.GetVariableObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxMoviePlayer::GetVariableObject(class FString Path, class UClass* Type)
{
	static UFunction* uFnGetVariableObject = nullptr;

	if (!uFnGetVariableObject)
	{
		uFnGetVariableObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableObject");
	}

	UGFxMoviePlayer_execGetVariableObject_Params GetVariableObject_Params;
	memcpy_s(&GetVariableObject_Params.Path, sizeof(GetVariableObject_Params.Path), &Path, sizeof(Path));
	memcpy_s(&GetVariableObject_Params.Type, sizeof(GetVariableObject_Params.Type), &Type, sizeof(Type));

	this->ProcessEvent(uFnGetVariableObject, &GetVariableObject_Params, nullptr);

	return GetVariableObject_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

class FString UGFxMoviePlayer::GetVariableString(class FString Path)
{
	static UFunction* uFnGetVariableString = nullptr;

	if (!uFnGetVariableString)
	{
		uFnGetVariableString = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableString");
	}

	UGFxMoviePlayer_execGetVariableString_Params GetVariableString_Params;
	memcpy_s(&GetVariableString_Params.Path, sizeof(GetVariableString_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnGetVariableString, &GetVariableString_Params, nullptr);

	return GetVariableString_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

int32_t UGFxMoviePlayer::GetVariableInt(class FString Path)
{
	static UFunction* uFnGetVariableInt = nullptr;

	if (!uFnGetVariableInt)
	{
		uFnGetVariableInt = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableInt");
	}

	UGFxMoviePlayer_execGetVariableInt_Params GetVariableInt_Params;
	memcpy_s(&GetVariableInt_Params.Path, sizeof(GetVariableInt_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnGetVariableInt, &GetVariableInt_Params, nullptr);

	return GetVariableInt_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

float UGFxMoviePlayer::GetVariableNumber(class FString Path)
{
	static UFunction* uFnGetVariableNumber = nullptr;

	if (!uFnGetVariableNumber)
	{
		uFnGetVariableNumber = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableNumber");
	}

	UGFxMoviePlayer_execGetVariableNumber_Params GetVariableNumber_Params;
	memcpy_s(&GetVariableNumber_Params.Path, sizeof(GetVariableNumber_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnGetVariableNumber, &GetVariableNumber_Params, nullptr);

	return GetVariableNumber_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableBool(class FString Path)
{
	static UFunction* uFnGetVariableBool = nullptr;

	if (!uFnGetVariableBool)
	{
		uFnGetVariableBool = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableBool");
	}

	UGFxMoviePlayer_execGetVariableBool_Params GetVariableBool_Params;
	memcpy_s(&GetVariableBool_Params.Path, sizeof(GetVariableBool_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnGetVariableBool, &GetVariableBool_Params, nullptr);

	return GetVariableBool_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxMoviePlayer::GetVariable(class FString Path)
{
	static UFunction* uFnGetVariable = nullptr;

	if (!uFnGetVariable)
	{
		uFnGetVariable = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariable");
	}

	UGFxMoviePlayer_execGetVariable_Params GetVariable_Params;
	memcpy_s(&GetVariable_Params.Path, sizeof(GetVariable_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnGetVariable, &GetVariable_Params, nullptr);

	return GetVariable_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetAVMVersion
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGFxMoviePlayer::GetAVMVersion()
{
	static UFunction* uFnGetAVMVersion = nullptr;

	if (!uFnGetAVMVersion)
	{
		uFnGetAVMVersion = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetAVMVersion");
	}

	UGFxMoviePlayer_execGetAVMVersion_Params GetAVMVersion_Params;

	this->ProcessEvent(uFnGetAVMVersion, &GetAVMVersion_Params, nullptr);

	return GetAVMVersion_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UGFxMoviePlayer::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.FilterButtonInput");
	}

	UGFxMoviePlayer_eventFilterButtonInput_Params FilterButtonInput_Params;
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           capturekeysonly                (CPF_Parm)

void UGFxMoviePlayer::FlushPlayerInput(bool capturekeysonly)
{
	static UFunction* uFnFlushPlayerInput = nullptr;

	if (!uFnFlushPlayerInput)
	{
		uFnFlushPlayerInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.FlushPlayerInput");
	}

	UGFxMoviePlayer_execFlushPlayerInput_Params FlushPlayerInput_Params;
	FlushPlayerInput_Params.capturekeysonly = capturekeysonly;

	this->ProcessEvent(uFnFlushPlayerInput, &FlushPlayerInput_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::ClearFocusIgnoreKeys()
{
	static UFunction* uFnClearFocusIgnoreKeys = nullptr;

	if (!uFnClearFocusIgnoreKeys)
	{
		uFnClearFocusIgnoreKeys = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys");
	}

	UGFxMoviePlayer_execClearFocusIgnoreKeys_Params ClearFocusIgnoreKeys_Params;

	this->ProcessEvent(uFnClearFocusIgnoreKeys, &ClearFocusIgnoreKeys_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)

void UGFxMoviePlayer::AddFocusIgnoreKey(struct FName Key)
{
	static UFunction* uFnAddFocusIgnoreKey = nullptr;

	if (!uFnAddFocusIgnoreKey)
	{
		uFnAddFocusIgnoreKey = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey");
	}

	UGFxMoviePlayer_execAddFocusIgnoreKey_Params AddFocusIgnoreKey_Params;
	memcpy_s(&AddFocusIgnoreKey_Params.Key, sizeof(AddFocusIgnoreKey_Params.Key), &Key, sizeof(Key));

	this->ProcessEvent(uFnAddFocusIgnoreKey, &AddFocusIgnoreKey_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::ClearCaptureKeys()
{
	static UFunction* uFnClearCaptureKeys = nullptr;

	if (!uFnClearCaptureKeys)
	{
		uFnClearCaptureKeys = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ClearCaptureKeys");
	}

	UGFxMoviePlayer_execClearCaptureKeys_Params ClearCaptureKeys_Params;

	this->ProcessEvent(uFnClearCaptureKeys, &ClearCaptureKeys_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)

void UGFxMoviePlayer::AddCaptureKey(struct FName Key)
{
	static UFunction* uFnAddCaptureKey = nullptr;

	if (!uFnAddCaptureKey)
	{
		uFnAddCaptureKey = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.AddCaptureKey");
	}

	UGFxMoviePlayer_execAddCaptureKey_Params AddCaptureKey_Params;
	memcpy_s(&AddCaptureKey_Params.Key, sizeof(AddCaptureKey_Params.Key), &Key, sizeof(Key));

	this->ProcessEvent(uFnAddCaptureKey, &AddCaptureKey_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bCanReceiveInput               (CPF_Parm)

void UGFxMoviePlayer::SetMovieCanReceiveInput(bool bCanReceiveInput)
{
	static UFunction* uFnSetMovieCanReceiveInput = nullptr;

	if (!uFnSetMovieCanReceiveInput)
	{
		uFnSetMovieCanReceiveInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput");
	}

	UGFxMoviePlayer_execSetMovieCanReceiveInput_Params SetMovieCanReceiveInput_Params;
	SetMovieCanReceiveInput_Params.bCanReceiveInput = bCanReceiveInput;

	this->ProcessEvent(uFnSetMovieCanReceiveInput, &SetMovieCanReceiveInput_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bCanReceiveFocus               (CPF_Parm)

void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool bCanReceiveFocus)
{
	static UFunction* uFnSetMovieCanReceiveFocus = nullptr;

	if (!uFnSetMovieCanReceiveFocus)
	{
		uFnSetMovieCanReceiveFocus = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus");
	}

	UGFxMoviePlayer_execSetMovieCanReceiveFocus_Params SetMovieCanReceiveFocus_Params;
	SetMovieCanReceiveFocus_Params.bCanReceiveFocus = bCanReceiveFocus;

	this->ProcessEvent(uFnSetMovieCanReceiveFocus, &SetMovieCanReceiveFocus_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 matPersp                       (CPF_Const | CPF_Parm | CPF_OutParm)

void UGFxMoviePlayer::SetPerspective3D(struct FMatrix& matPersp)
{
	static UFunction* uFnSetPerspective3D = nullptr;

	if (!uFnSetPerspective3D)
	{
		uFnSetPerspective3D = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetPerspective3D");
	}

	UGFxMoviePlayer_execSetPerspective3D_Params SetPerspective3D_Params;
	memcpy_s(&SetPerspective3D_Params.matPersp, sizeof(SetPerspective3D_Params.matPersp), &matPersp, sizeof(matPersp));

	this->ProcessEvent(uFnSetPerspective3D, &SetPerspective3D_Params, nullptr);

	memcpy_s(&matPersp, sizeof(matPersp), &SetPerspective3D_Params.matPersp, sizeof(SetPerspective3D_Params.matPersp));
};

// Function GFxUI.GFxMoviePlayer.SetView3D
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 matView                        (CPF_Const | CPF_Parm | CPF_OutParm)

void UGFxMoviePlayer::SetView3D(struct FMatrix& matView)
{
	static UFunction* uFnSetView3D = nullptr;

	if (!uFnSetView3D)
	{
		uFnSetView3D = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetView3D");
	}

	UGFxMoviePlayer_execSetView3D_Params SetView3D_Params;
	memcpy_s(&SetView3D_Params.matView, sizeof(SetView3D_Params.matView), &matView, sizeof(matView));

	this->ProcessEvent(uFnSetView3D, &SetView3D_Params, nullptr);

	memcpy_s(&matView, sizeof(matView), &SetView3D_Params.matView, sizeof(SetView3D_Params.matView));
};

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          x0                             (CPF_Parm | CPF_OutParm)
// float                          y0                             (CPF_Parm | CPF_OutParm)
// float                          X1                             (CPF_Parm | CPF_OutParm)
// float                          Y1                             (CPF_Parm | CPF_OutParm)

void UGFxMoviePlayer::GetVisibleFrameRect(float& x0, float& y0, float& X1, float& Y1)
{
	static UFunction* uFnGetVisibleFrameRect = nullptr;

	if (!uFnGetVisibleFrameRect)
	{
		uFnGetVisibleFrameRect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect");
	}

	UGFxMoviePlayer_execGetVisibleFrameRect_Params GetVisibleFrameRect_Params;
	memcpy_s(&GetVisibleFrameRect_Params.x0, sizeof(GetVisibleFrameRect_Params.x0), &x0, sizeof(x0));
	memcpy_s(&GetVisibleFrameRect_Params.y0, sizeof(GetVisibleFrameRect_Params.y0), &y0, sizeof(y0));
	memcpy_s(&GetVisibleFrameRect_Params.X1, sizeof(GetVisibleFrameRect_Params.X1), &X1, sizeof(X1));
	memcpy_s(&GetVisibleFrameRect_Params.Y1, sizeof(GetVisibleFrameRect_Params.Y1), &Y1, sizeof(Y1));

	this->ProcessEvent(uFnGetVisibleFrameRect, &GetVisibleFrameRect_Params, nullptr);

	memcpy_s(&x0, sizeof(x0), &GetVisibleFrameRect_Params.x0, sizeof(GetVisibleFrameRect_Params.x0));
	memcpy_s(&y0, sizeof(y0), &GetVisibleFrameRect_Params.y0, sizeof(GetVisibleFrameRect_Params.y0));
	memcpy_s(&X1, sizeof(X1), &GetVisibleFrameRect_Params.X1, sizeof(GetVisibleFrameRect_Params.X1));
	memcpy_s(&Y1, sizeof(Y1), &GetVisibleFrameRect_Params.Y1, sizeof(GetVisibleFrameRect_Params.Y1));
};

// Function GFxUI.GFxMoviePlayer.SetAlignment
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EGFxAlign                      A                              (CPF_Parm)

void UGFxMoviePlayer::SetAlignment(EGFxAlign A)
{
	static UFunction* uFnSetAlignment = nullptr;

	if (!uFnSetAlignment)
	{
		uFnSetAlignment = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetAlignment");
	}

	UGFxMoviePlayer_execSetAlignment_Params SetAlignment_Params;
	memcpy_s(&SetAlignment_Params.A, sizeof(SetAlignment_Params.A), &A, sizeof(A));

	this->ProcessEvent(uFnSetAlignment, &SetAlignment_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EGFxScaleMode                  SM                             (CPF_Parm)

void UGFxMoviePlayer::SetViewScaleMode(EGFxScaleMode SM)
{
	static UFunction* uFnSetViewScaleMode = nullptr;

	if (!uFnSetViewScaleMode)
	{
		uFnSetViewScaleMode = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetViewScaleMode");
	}

	UGFxMoviePlayer_execSetViewScaleMode_Params SetViewScaleMode_Params;
	memcpy_s(&SetViewScaleMode_Params.SM, sizeof(SetViewScaleMode_Params.SM), &SM, sizeof(SM));

	this->ProcessEvent(uFnSetViewScaleMode, &SetViewScaleMode_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetViewport
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        X                              (CPF_Parm)
// int32_t                        Y                              (CPF_Parm)
// int32_t                        Width                          (CPF_Parm)
// int32_t                        Height                         (CPF_Parm)

void UGFxMoviePlayer::SetViewport(int32_t X, int32_t Y, int32_t Width, int32_t Height)
{
	static UFunction* uFnSetViewport = nullptr;

	if (!uFnSetViewport)
	{
		uFnSetViewport = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetViewport");
	}

	UGFxMoviePlayer_execSetViewport_Params SetViewport_Params;
	memcpy_s(&SetViewport_Params.X, sizeof(SetViewport_Params.X), &X, sizeof(X));
	memcpy_s(&SetViewport_Params.Y, sizeof(SetViewport_Params.Y), &Y, sizeof(Y));
	memcpy_s(&SetViewport_Params.Width, sizeof(SetViewport_Params.Width), &Width, sizeof(Width));
	memcpy_s(&SetViewport_Params.Height, sizeof(SetViewport_Params.Height), &Height, sizeof(Height));

	this->ProcessEvent(uFnSetViewport, &SetViewport_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameViewportClient*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGameViewportClient* UGFxMoviePlayer::GetGameViewportClient()
{
	static UFunction* uFnGetGameViewportClient = nullptr;

	if (!uFnGetGameViewportClient)
	{
		uFnGetGameViewportClient = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetGameViewportClient");
	}

	UGFxMoviePlayer_execGetGameViewportClient_Params GetGameViewportClient_Params;

	this->ProcessEvent(uFnGetGameViewportClient, &GetGameViewportClient_Params, nullptr);

	return GetGameViewportClient_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetPriority
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        NewPriority                    (CPF_Parm)

void UGFxMoviePlayer::SetPriority(uint8_t NewPriority)
{
	static UFunction* uFnSetPriority = nullptr;

	if (!uFnSetPriority)
	{
		uFnSetPriority = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetPriority");
	}

	UGFxMoviePlayer_execSetPriority_Params SetPriority_Params;
	memcpy_s(&SetPriority_Params.NewPriority, sizeof(SetPriority_Params.NewPriority), &NewPriority, sizeof(NewPriority));

	this->ProcessEvent(uFnSetPriority, &SetPriority_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Resource                       (CPF_Parm | CPF_NeedCtorLink)
// class UTexture*                Texture                        (CPF_Parm)

bool UGFxMoviePlayer::SetExternalTexture(class FString Resource, class UTexture* Texture)
{
	static UFunction* uFnSetExternalTexture = nullptr;

	if (!uFnSetExternalTexture)
	{
		uFnSetExternalTexture = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetExternalTexture");
	}

	UGFxMoviePlayer_execSetExternalTexture_Params SetExternalTexture_Params;
	memcpy_s(&SetExternalTexture_Params.Resource, sizeof(SetExternalTexture_Params.Resource), &Resource, sizeof(Resource));
	memcpy_s(&SetExternalTexture_Params.Texture, sizeof(SetExternalTexture_Params.Texture), &Texture, sizeof(Texture));

	this->ProcessEvent(uFnSetExternalTexture, &SetExternalTexture_Params, nullptr);

	return SetExternalTexture_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UObject*                 H                              (CPF_Parm)

void UGFxMoviePlayer::SetExternalInterface(class UObject* H)
{
	static UFunction* uFnSetExternalInterface = nullptr;

	if (!uFnSetExternalInterface)
	{
		uFnSetExternalInterface = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetExternalInterface");
	}

	UGFxMoviePlayer_execSetExternalInterface_Params SetExternalInterface_Params;
	memcpy_s(&SetExternalInterface_Params.H, sizeof(SetExternalInterface_Params.H), &H, sizeof(H));

	this->ProcessEvent(uFnSetExternalInterface, &SetExternalInterface_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetTimingMode
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EGFxTimingMode                 Mode                           (CPF_Parm)

void UGFxMoviePlayer::SetTimingMode(EGFxTimingMode Mode)
{
	static UFunction* uFnSetTimingMode = nullptr;

	if (!uFnSetTimingMode)
	{
		uFnSetTimingMode = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetTimingMode");
	}

	UGFxMoviePlayer_execSetTimingMode_Params SetTimingMode_Params;
	memcpy_s(&SetTimingMode_Params.Mode, sizeof(SetTimingMode_Params.Mode), &Mode, sizeof(Mode));

	this->ProcessEvent(uFnSetTimingMode, &SetTimingMode_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USwfMovie*               Data                           (CPF_Parm)

void UGFxMoviePlayer::SetMovieInfo(class USwfMovie* Data)
{
	static UFunction* uFnSetMovieInfo = nullptr;

	if (!uFnSetMovieInfo)
	{
		uFnSetMovieInfo = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieInfo");
	}

	UGFxMoviePlayer_execSetMovieInfo_Params SetMovieInfo_Params;
	memcpy_s(&SetMovieInfo_Params.Data, sizeof(SetMovieInfo_Params.Data), &Data, sizeof(Data));

	this->ProcessEvent(uFnSetMovieInfo, &SetMovieInfo_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventConditionalClearPause()
{
	static UFunction* uFnConditionalClearPause = nullptr;

	if (!uFnConditionalClearPause)
	{
		uFnConditionalClearPause = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ConditionalClearPause");
	}

	UGFxMoviePlayer_eventConditionalClearPause_Params ConditionalClearPause_Params;

	this->ProcessEvent(uFnConditionalClearPause, &ConditionalClearPause_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.OnCleanup
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventOnCleanup()
{
	static UFunction* uFnOnCleanup = nullptr;

	if (!uFnOnCleanup)
	{
		uFnOnCleanup = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnCleanup");
	}

	UGFxMoviePlayer_eventOnCleanup_Params OnCleanup_Params;

	this->ProcessEvent(uFnOnCleanup, &OnCleanup_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.OnClose
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventOnClose()
{
	static UFunction* uFnOnClose = nullptr;

	if (!uFnOnClose)
	{
		uFnOnClose = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnClose");
	}

	UGFxMoviePlayer_eventOnClose_Params OnClose_Params;

	this->ProcessEvent(uFnOnClose, &OnClose_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.Close
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           Unload                         (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::Close(bool Unload)
{
	static UFunction* uFnClose = nullptr;

	if (!uFnClose)
	{
		uFnClose = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Close");
	}

	UGFxMoviePlayer_execClose_Params Close_Params;
	Close_Params.Unload = Unload;

	this->ProcessEvent(uFnClose, &Close_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetPause
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPausePlayback                 (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::SetPause(bool bPausePlayback)
{
	static UFunction* uFnSetPause = nullptr;

	if (!uFnSetPause)
	{
		uFnSetPause = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetPause");
	}

	UGFxMoviePlayer_execSetPause_Params SetPause_Params;
	SetPause_Params.bPausePlayback = bPausePlayback;

	this->ProcessEvent(uFnSetPause, &SetPause_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGFxMoviePlayer::OnPostAdvance(float DeltaTime)
{
	static UFunction* uFnOnPostAdvance = nullptr;

	if (!uFnOnPostAdvance)
	{
		uFnOnPostAdvance = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnPostAdvance");
	}

	UGFxMoviePlayer_execOnPostAdvance_Params OnPostAdvance_Params;
	memcpy_s(&OnPostAdvance_Params.DeltaTime, sizeof(OnPostAdvance_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnOnPostAdvance, &OnPostAdvance_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.PostAdvance
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGFxMoviePlayer::PostAdvance(float DeltaTime)
{
	static UFunction* uFnPostAdvance = nullptr;

	if (!uFnPostAdvance)
	{
		uFnPostAdvance = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.PostAdvance");
	}

	UGFxMoviePlayer_execPostAdvance_Params PostAdvance_Params;
	memcpy_s(&PostAdvance_Params.DeltaTime, sizeof(PostAdvance_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnPostAdvance, &PostAdvance_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.Advance
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Time                           (CPF_Parm)

void UGFxMoviePlayer::Advance(float Time)
{
	static UFunction* uFnAdvance = nullptr;

	if (!uFnAdvance)
	{
		uFnAdvance = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Advance");
	}

	UGFxMoviePlayer_execAdvance_Params Advance_Params;
	memcpy_s(&Advance_Params.Time, sizeof(Advance_Params.Time), &Time, sizeof(Time));

	this->ProcessEvent(uFnAdvance, &Advance_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.Start
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           StartPaused                    (CPF_OptionalParm | CPF_Parm)

bool UGFxMoviePlayer::eventStart(bool StartPaused)
{
	static UFunction* uFnStart = nullptr;

	if (!uFnStart)
	{
		uFnStart = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Start");
	}

	UGFxMoviePlayer_eventStart_Params Start_Params;
	Start_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnStart, &Start_Params, nullptr);

	return Start_Params.ReturnValue;
};

// Function GFxUI.GFxObject.WidgetUnloaded
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxObject::eventWidgetUnloaded(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetUnloaded = nullptr;

	if (!uFnWidgetUnloaded)
	{
		uFnWidgetUnloaded = UFunction::FindFunction("Function GFxUI.GFxObject.WidgetUnloaded");
	}

	UGFxObject_eventWidgetUnloaded_Params WidgetUnloaded_Params;
	memcpy_s(&WidgetUnloaded_Params.WidgetName, sizeof(WidgetUnloaded_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetUnloaded_Params.WidgetPath, sizeof(WidgetUnloaded_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetUnloaded_Params.Widget, sizeof(WidgetUnloaded_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetUnloaded, &WidgetUnloaded_Params, nullptr);

	return WidgetUnloaded_Params.ReturnValue;
};

// Function GFxUI.GFxObject.WidgetInitialized
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxObject::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function GFxUI.GFxObject.WidgetInitialized");
	}

	UGFxObject_eventWidgetInitialized_Params WidgetInitialized_Params;
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function GFxUI.GFxObject.AttachMovie
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  symbolname                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  instancename                   (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Depth                          (CPF_OptionalParm | CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::AttachMovie(class FString symbolname, class FString instancename, int32_t Depth, class UClass* Type)
{
	static UFunction* uFnAttachMovie = nullptr;

	if (!uFnAttachMovie)
	{
		uFnAttachMovie = UFunction::FindFunction("Function GFxUI.GFxObject.AttachMovie");
	}

	UGFxObject_execAttachMovie_Params AttachMovie_Params;
	memcpy_s(&AttachMovie_Params.symbolname, sizeof(AttachMovie_Params.symbolname), &symbolname, sizeof(symbolname));
	memcpy_s(&AttachMovie_Params.instancename, sizeof(AttachMovie_Params.instancename), &instancename, sizeof(instancename));
	memcpy_s(&AttachMovie_Params.Depth, sizeof(AttachMovie_Params.Depth), &Depth, sizeof(Depth));
	memcpy_s(&AttachMovie_Params.Type, sizeof(AttachMovie_Params.Type), &Type, sizeof(Type));

	this->ProcessEvent(uFnAttachMovie, &AttachMovie_Params, nullptr);

	return AttachMovie_Params.ReturnValue;
};

// Function GFxUI.GFxObject.CreateEmptyMovieClip
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  instancename                   (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Depth                          (CPF_OptionalParm | CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::CreateEmptyMovieClip(class FString instancename, int32_t Depth, class UClass* Type)
{
	static UFunction* uFnCreateEmptyMovieClip = nullptr;

	if (!uFnCreateEmptyMovieClip)
	{
		uFnCreateEmptyMovieClip = UFunction::FindFunction("Function GFxUI.GFxObject.CreateEmptyMovieClip");
	}

	UGFxObject_execCreateEmptyMovieClip_Params CreateEmptyMovieClip_Params;
	memcpy_s(&CreateEmptyMovieClip_Params.instancename, sizeof(CreateEmptyMovieClip_Params.instancename), &instancename, sizeof(instancename));
	memcpy_s(&CreateEmptyMovieClip_Params.Depth, sizeof(CreateEmptyMovieClip_Params.Depth), &Depth, sizeof(Depth));
	memcpy_s(&CreateEmptyMovieClip_Params.Type, sizeof(CreateEmptyMovieClip_Params.Type), &Type, sizeof(Type));

	this->ProcessEvent(uFnCreateEmptyMovieClip, &CreateEmptyMovieClip_Params, nullptr);

	return CreateEmptyMovieClip_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GotoAndStopI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        frame                          (CPF_Parm)

void UGFxObject::GotoAndStopI(int32_t frame)
{
	static UFunction* uFnGotoAndStopI = nullptr;

	if (!uFnGotoAndStopI)
	{
		uFnGotoAndStopI = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndStopI");
	}

	UGFxObject_execGotoAndStopI_Params GotoAndStopI_Params;
	memcpy_s(&GotoAndStopI_Params.frame, sizeof(GotoAndStopI_Params.frame), &frame, sizeof(frame));

	this->ProcessEvent(uFnGotoAndStopI, &GotoAndStopI_Params, nullptr);
};

// Function GFxUI.GFxObject.GotoAndStop
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  frame                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::GotoAndStop(class FString frame)
{
	static UFunction* uFnGotoAndStop = nullptr;

	if (!uFnGotoAndStop)
	{
		uFnGotoAndStop = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndStop");
	}

	UGFxObject_execGotoAndStop_Params GotoAndStop_Params;
	memcpy_s(&GotoAndStop_Params.frame, sizeof(GotoAndStop_Params.frame), &frame, sizeof(frame));

	this->ProcessEvent(uFnGotoAndStop, &GotoAndStop_Params, nullptr);
};

// Function GFxUI.GFxObject.GotoAndPlayI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        frame                          (CPF_Parm)

void UGFxObject::GotoAndPlayI(int32_t frame)
{
	static UFunction* uFnGotoAndPlayI = nullptr;

	if (!uFnGotoAndPlayI)
	{
		uFnGotoAndPlayI = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndPlayI");
	}

	UGFxObject_execGotoAndPlayI_Params GotoAndPlayI_Params;
	memcpy_s(&GotoAndPlayI_Params.frame, sizeof(GotoAndPlayI_Params.frame), &frame, sizeof(frame));

	this->ProcessEvent(uFnGotoAndPlayI, &GotoAndPlayI_Params, nullptr);
};

// Function GFxUI.GFxObject.GotoAndPlay
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  frame                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::GotoAndPlay(class FString frame)
{
	static UFunction* uFnGotoAndPlay = nullptr;

	if (!uFnGotoAndPlay)
	{
		uFnGotoAndPlay = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndPlay");
	}

	UGFxObject_execGotoAndPlay_Params GotoAndPlay_Params;
	memcpy_s(&GotoAndPlay_Params.frame, sizeof(GotoAndPlay_Params.frame), &frame, sizeof(frame));

	this->ProcessEvent(uFnGotoAndPlay, &GotoAndPlay_Params, nullptr);
};

// Function GFxUI.GFxObject.ActionScriptArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<class UGFxObject*>      ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

TArray<class UGFxObject*> UGFxObject::ActionScriptArray(class FString Path)
{
	static UFunction* uFnActionScriptArray = nullptr;

	if (!uFnActionScriptArray)
	{
		uFnActionScriptArray = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptArray");
	}

	UGFxObject_execActionScriptArray_Params ActionScriptArray_Params;
	memcpy_s(&ActionScriptArray_Params.Path, sizeof(ActionScriptArray_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnActionScriptArray, &ActionScriptArray_Params, nullptr);

	return ActionScriptArray_Params.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxObject::ActionScriptObject(class FString Path)
{
	static UFunction* uFnActionScriptObject = nullptr;

	if (!uFnActionScriptObject)
	{
		uFnActionScriptObject = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptObject");
	}

	UGFxObject_execActionScriptObject_Params ActionScriptObject_Params;
	memcpy_s(&ActionScriptObject_Params.Path, sizeof(ActionScriptObject_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnActionScriptObject, &ActionScriptObject_Params, nullptr);

	return ActionScriptObject_Params.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  method                         (CPF_Parm | CPF_NeedCtorLink)

class FString UGFxObject::ActionScriptString(class FString method)
{
	static UFunction* uFnActionScriptString = nullptr;

	if (!uFnActionScriptString)
	{
		uFnActionScriptString = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptString");
	}

	UGFxObject_execActionScriptString_Params ActionScriptString_Params;
	memcpy_s(&ActionScriptString_Params.method, sizeof(ActionScriptString_Params.method), &method, sizeof(method));

	this->ProcessEvent(uFnActionScriptString, &ActionScriptString_Params, nullptr);

	return ActionScriptString_Params.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  method                         (CPF_Parm | CPF_NeedCtorLink)

float UGFxObject::ActionScriptFloat(class FString method)
{
	static UFunction* uFnActionScriptFloat = nullptr;

	if (!uFnActionScriptFloat)
	{
		uFnActionScriptFloat = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptFloat");
	}

	UGFxObject_execActionScriptFloat_Params ActionScriptFloat_Params;
	memcpy_s(&ActionScriptFloat_Params.method, sizeof(ActionScriptFloat_Params.method), &method, sizeof(method));

	this->ProcessEvent(uFnActionScriptFloat, &ActionScriptFloat_Params, nullptr);

	return ActionScriptFloat_Params.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  method                         (CPF_Parm | CPF_NeedCtorLink)

int32_t UGFxObject::ActionScriptInt(class FString method)
{
	static UFunction* uFnActionScriptInt = nullptr;

	if (!uFnActionScriptInt)
	{
		uFnActionScriptInt = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptInt");
	}

	UGFxObject_execActionScriptInt_Params ActionScriptInt_Params;
	memcpy_s(&ActionScriptInt_Params.method, sizeof(ActionScriptInt_Params.method), &method, sizeof(method));

	this->ProcessEvent(uFnActionScriptInt, &ActionScriptInt_Params, nullptr);

	return ActionScriptInt_Params.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptVoid
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  method                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::ActionScriptVoid(class FString method)
{
	static UFunction* uFnActionScriptVoid = nullptr;

	if (!uFnActionScriptVoid)
	{
		uFnActionScriptVoid = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptVoid");
	}

	UGFxObject_execActionScriptVoid_Params ActionScriptVoid_Params;
	memcpy_s(&ActionScriptVoid_Params.method, sizeof(ActionScriptVoid_Params.method), &method, sizeof(method));

	this->ProcessEvent(uFnActionScriptVoid, &ActionScriptVoid_Params, nullptr);
};

// Function GFxUI.GFxObject.Invoke
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FASValue>        args                           (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxObject::Invoke(class FString Member, TArray<struct FASValue> args)
{
	static UFunction* uFnInvoke = nullptr;

	if (!uFnInvoke)
	{
		uFnInvoke = UFunction::FindFunction("Function GFxUI.GFxObject.Invoke");
	}

	UGFxObject_execInvoke_Params Invoke_Params;
	memcpy_s(&Invoke_Params.Member, sizeof(Invoke_Params.Member), &Member, sizeof(Member));
	memcpy_s(&Invoke_Params.args, sizeof(Invoke_Params.args), &args, sizeof(args));

	this->ProcessEvent(uFnInvoke, &Invoke_Params, nullptr);

	return Invoke_Params.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              Target                         (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::ActionScriptSetFunctionOn(class UGFxObject* Target, class FString Member)
{
	static UFunction* uFnActionScriptSetFunctionOn = nullptr;

	if (!uFnActionScriptSetFunctionOn)
	{
		uFnActionScriptSetFunctionOn = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptSetFunctionOn");
	}

	UGFxObject_execActionScriptSetFunctionOn_Params ActionScriptSetFunctionOn_Params;
	memcpy_s(&ActionScriptSetFunctionOn_Params.Target, sizeof(ActionScriptSetFunctionOn_Params.Target), &Target, sizeof(Target));
	memcpy_s(&ActionScriptSetFunctionOn_Params.Member, sizeof(ActionScriptSetFunctionOn_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnActionScriptSetFunctionOn, &ActionScriptSetFunctionOn_Params, nullptr);
};

// Function GFxUI.GFxObject.ActionScriptSetFunction
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::ActionScriptSetFunction(class FString Member)
{
	static UFunction* uFnActionScriptSetFunction = nullptr;

	if (!uFnActionScriptSetFunction)
	{
		uFnActionScriptSetFunction = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptSetFunction");
	}

	UGFxObject_execActionScriptSetFunction_Params ActionScriptSetFunction_Params;
	memcpy_s(&ActionScriptSetFunction_Params.Member, sizeof(ActionScriptSetFunction_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnActionScriptSetFunction, &ActionScriptSetFunction_Params, nullptr);
};

// Function GFxUI.GFxObject.SetElementMemberString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElementMemberString(int32_t Index, class FString Member, class FString S)
{
	static UFunction* uFnSetElementMemberString = nullptr;

	if (!uFnSetElementMemberString)
	{
		uFnSetElementMemberString = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberString");
	}

	UGFxObject_execSetElementMemberString_Params SetElementMemberString_Params;
	memcpy_s(&SetElementMemberString_Params.Index, sizeof(SetElementMemberString_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementMemberString_Params.Member, sizeof(SetElementMemberString_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetElementMemberString_Params.S, sizeof(SetElementMemberString_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnSetElementMemberString, &SetElementMemberString_Params, nullptr);
};

// Function GFxUI.GFxObject.SetElementMemberInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)

void UGFxObject::SetElementMemberInt(int32_t Index, class FString Member, int32_t I)
{
	static UFunction* uFnSetElementMemberInt = nullptr;

	if (!uFnSetElementMemberInt)
	{
		uFnSetElementMemberInt = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberInt");
	}

	UGFxObject_execSetElementMemberInt_Params SetElementMemberInt_Params;
	memcpy_s(&SetElementMemberInt_Params.Index, sizeof(SetElementMemberInt_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementMemberInt_Params.Member, sizeof(SetElementMemberInt_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetElementMemberInt_Params.I, sizeof(SetElementMemberInt_Params.I), &I, sizeof(I));

	this->ProcessEvent(uFnSetElementMemberInt, &SetElementMemberInt_Params, nullptr);
};

// Function GFxUI.GFxObject.SetElementMemberFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// float                          F                              (CPF_Parm)

void UGFxObject::SetElementMemberFloat(int32_t Index, class FString Member, float F)
{
	static UFunction* uFnSetElementMemberFloat = nullptr;

	if (!uFnSetElementMemberFloat)
	{
		uFnSetElementMemberFloat = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberFloat");
	}

	UGFxObject_execSetElementMemberFloat_Params SetElementMemberFloat_Params;
	memcpy_s(&SetElementMemberFloat_Params.Index, sizeof(SetElementMemberFloat_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementMemberFloat_Params.Member, sizeof(SetElementMemberFloat_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetElementMemberFloat_Params.F, sizeof(SetElementMemberFloat_Params.F), &F, sizeof(F));

	this->ProcessEvent(uFnSetElementMemberFloat, &SetElementMemberFloat_Params, nullptr);
};

// Function GFxUI.GFxObject.SetElementMemberBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// bool                           B                              (CPF_Parm)

void UGFxObject::SetElementMemberBool(int32_t Index, class FString Member, bool B)
{
	static UFunction* uFnSetElementMemberBool = nullptr;

	if (!uFnSetElementMemberBool)
	{
		uFnSetElementMemberBool = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberBool");
	}

	UGFxObject_execSetElementMemberBool_Params SetElementMemberBool_Params;
	memcpy_s(&SetElementMemberBool_Params.Index, sizeof(SetElementMemberBool_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementMemberBool_Params.Member, sizeof(SetElementMemberBool_Params.Member), &Member, sizeof(Member));
	SetElementMemberBool_Params.B = B;

	this->ProcessEvent(uFnSetElementMemberBool, &SetElementMemberBool_Params, nullptr);
};

// Function GFxUI.GFxObject.SetElementMemberObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetElementMemberObject(int32_t Index, class FString Member, class UGFxObject* val)
{
	static UFunction* uFnSetElementMemberObject = nullptr;

	if (!uFnSetElementMemberObject)
	{
		uFnSetElementMemberObject = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberObject");
	}

	UGFxObject_execSetElementMemberObject_Params SetElementMemberObject_Params;
	memcpy_s(&SetElementMemberObject_Params.Index, sizeof(SetElementMemberObject_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementMemberObject_Params.Member, sizeof(SetElementMemberObject_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetElementMemberObject_Params.val, sizeof(SetElementMemberObject_Params.val), &val, sizeof(val));

	this->ProcessEvent(uFnSetElementMemberObject, &SetElementMemberObject_Params, nullptr);
};

// Function GFxUI.GFxObject.SetElementMember
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElementMember(int32_t Index, class FString Member, struct FASValue Arg)
{
	static UFunction* uFnSetElementMember = nullptr;

	if (!uFnSetElementMember)
	{
		uFnSetElementMember = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMember");
	}

	UGFxObject_execSetElementMember_Params SetElementMember_Params;
	memcpy_s(&SetElementMember_Params.Index, sizeof(SetElementMember_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementMember_Params.Member, sizeof(SetElementMember_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetElementMember_Params.Arg, sizeof(SetElementMember_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSetElementMember, &SetElementMember_Params, nullptr);
};

// Function GFxUI.GFxObject.GetElementMemberString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

class FString UGFxObject::GetElementMemberString(int32_t Index, class FString Member)
{
	static UFunction* uFnGetElementMemberString = nullptr;

	if (!uFnGetElementMemberString)
	{
		uFnGetElementMemberString = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberString");
	}

	UGFxObject_execGetElementMemberString_Params GetElementMemberString_Params;
	memcpy_s(&GetElementMemberString_Params.Index, sizeof(GetElementMemberString_Params.Index), &Index, sizeof(Index));
	memcpy_s(&GetElementMemberString_Params.Member, sizeof(GetElementMemberString_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetElementMemberString, &GetElementMemberString_Params, nullptr);

	return GetElementMemberString_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMemberInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

int32_t UGFxObject::GetElementMemberInt(int32_t Index, class FString Member)
{
	static UFunction* uFnGetElementMemberInt = nullptr;

	if (!uFnGetElementMemberInt)
	{
		uFnGetElementMemberInt = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberInt");
	}

	UGFxObject_execGetElementMemberInt_Params GetElementMemberInt_Params;
	memcpy_s(&GetElementMemberInt_Params.Index, sizeof(GetElementMemberInt_Params.Index), &Index, sizeof(Index));
	memcpy_s(&GetElementMemberInt_Params.Member, sizeof(GetElementMemberInt_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetElementMemberInt, &GetElementMemberInt_Params, nullptr);

	return GetElementMemberInt_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMemberFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

float UGFxObject::GetElementMemberFloat(int32_t Index, class FString Member)
{
	static UFunction* uFnGetElementMemberFloat = nullptr;

	if (!uFnGetElementMemberFloat)
	{
		uFnGetElementMemberFloat = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberFloat");
	}

	UGFxObject_execGetElementMemberFloat_Params GetElementMemberFloat_Params;
	memcpy_s(&GetElementMemberFloat_Params.Index, sizeof(GetElementMemberFloat_Params.Index), &Index, sizeof(Index));
	memcpy_s(&GetElementMemberFloat_Params.Member, sizeof(GetElementMemberFloat_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetElementMemberFloat, &GetElementMemberFloat_Params, nullptr);

	return GetElementMemberFloat_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMemberBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

bool UGFxObject::GetElementMemberBool(int32_t Index, class FString Member)
{
	static UFunction* uFnGetElementMemberBool = nullptr;

	if (!uFnGetElementMemberBool)
	{
		uFnGetElementMemberBool = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberBool");
	}

	UGFxObject_execGetElementMemberBool_Params GetElementMemberBool_Params;
	memcpy_s(&GetElementMemberBool_Params.Index, sizeof(GetElementMemberBool_Params.Index), &Index, sizeof(Index));
	memcpy_s(&GetElementMemberBool_Params.Member, sizeof(GetElementMemberBool_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetElementMemberBool, &GetElementMemberBool_Params, nullptr);

	return GetElementMemberBool_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMemberObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::GetElementMemberObject(int32_t Index, class FString Member, class UClass* Type)
{
	static UFunction* uFnGetElementMemberObject = nullptr;

	if (!uFnGetElementMemberObject)
	{
		uFnGetElementMemberObject = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberObject");
	}

	UGFxObject_execGetElementMemberObject_Params GetElementMemberObject_Params;
	memcpy_s(&GetElementMemberObject_Params.Index, sizeof(GetElementMemberObject_Params.Index), &Index, sizeof(Index));
	memcpy_s(&GetElementMemberObject_Params.Member, sizeof(GetElementMemberObject_Params.Member), &Member, sizeof(Member));
	memcpy_s(&GetElementMemberObject_Params.Type, sizeof(GetElementMemberObject_Params.Type), &Type, sizeof(Type));

	this->ProcessEvent(uFnGetElementMemberObject, &GetElementMemberObject_Params, nullptr);

	return GetElementMemberObject_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMember
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxObject::GetElementMember(int32_t Index, class FString Member)
{
	static UFunction* uFnGetElementMember = nullptr;

	if (!uFnGetElementMember)
	{
		uFnGetElementMember = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMember");
	}

	UGFxObject_execGetElementMember_Params GetElementMember_Params;
	memcpy_s(&GetElementMember_Params.Index, sizeof(GetElementMember_Params.Index), &Index, sizeof(Index));
	memcpy_s(&GetElementMember_Params.Member, sizeof(GetElementMember_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetElementMember, &GetElementMember_Params, nullptr);

	return GetElementMember_Params.ReturnValue;
};

// Function GFxUI.GFxObject.SetElementColorTransform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// struct FASColorTransform       cxform                         (CPF_Parm)

void UGFxObject::SetElementColorTransform(int32_t Index, struct FASColorTransform cxform)
{
	static UFunction* uFnSetElementColorTransform = nullptr;

	if (!uFnSetElementColorTransform)
	{
		uFnSetElementColorTransform = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementColorTransform");
	}

	UGFxObject_execSetElementColorTransform_Params SetElementColorTransform_Params;
	memcpy_s(&SetElementColorTransform_Params.Index, sizeof(SetElementColorTransform_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementColorTransform_Params.cxform, sizeof(SetElementColorTransform_Params.cxform), &cxform, sizeof(cxform));

	this->ProcessEvent(uFnSetElementColorTransform, &SetElementColorTransform_Params, nullptr);
};

// Function GFxUI.GFxObject.SetElementPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)

void UGFxObject::SetElementPosition(int32_t Index, float X, float Y)
{
	static UFunction* uFnSetElementPosition = nullptr;

	if (!uFnSetElementPosition)
	{
		uFnSetElementPosition = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementPosition");
	}

	UGFxObject_execSetElementPosition_Params SetElementPosition_Params;
	memcpy_s(&SetElementPosition_Params.Index, sizeof(SetElementPosition_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementPosition_Params.X, sizeof(SetElementPosition_Params.X), &X, sizeof(X));
	memcpy_s(&SetElementPosition_Params.Y, sizeof(SetElementPosition_Params.Y), &Y, sizeof(Y));

	this->ProcessEvent(uFnSetElementPosition, &SetElementPosition_Params, nullptr);
};

// Function GFxUI.GFxObject.SetElementVisible
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// bool                           Visible                        (CPF_Parm)

void UGFxObject::SetElementVisible(int32_t Index, bool Visible)
{
	static UFunction* uFnSetElementVisible = nullptr;

	if (!uFnSetElementVisible)
	{
		uFnSetElementVisible = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementVisible");
	}

	UGFxObject_execSetElementVisible_Params SetElementVisible_Params;
	memcpy_s(&SetElementVisible_Params.Index, sizeof(SetElementVisible_Params.Index), &Index, sizeof(Index));
	SetElementVisible_Params.Visible = Visible;

	this->ProcessEvent(uFnSetElementVisible, &SetElementVisible_Params, nullptr);
};

// Function GFxUI.GFxObject.SetElementDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// struct FMatrix                 M                              (CPF_Parm)

void UGFxObject::SetElementDisplayMatrix(int32_t Index, struct FMatrix M)
{
	static UFunction* uFnSetElementDisplayMatrix = nullptr;

	if (!uFnSetElementDisplayMatrix)
	{
		uFnSetElementDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementDisplayMatrix");
	}

	UGFxObject_execSetElementDisplayMatrix_Params SetElementDisplayMatrix_Params;
	memcpy_s(&SetElementDisplayMatrix_Params.Index, sizeof(SetElementDisplayMatrix_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementDisplayMatrix_Params.M, sizeof(SetElementDisplayMatrix_Params.M), &M, sizeof(M));

	this->ProcessEvent(uFnSetElementDisplayMatrix, &SetElementDisplayMatrix_Params, nullptr);
};

// Function GFxUI.GFxObject.SetElementDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// struct FASDisplayInfo          D                              (CPF_Parm)

void UGFxObject::SetElementDisplayInfo(int32_t Index, struct FASDisplayInfo D)
{
	static UFunction* uFnSetElementDisplayInfo = nullptr;

	if (!uFnSetElementDisplayInfo)
	{
		uFnSetElementDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementDisplayInfo");
	}

	UGFxObject_execSetElementDisplayInfo_Params SetElementDisplayInfo_Params;
	memcpy_s(&SetElementDisplayInfo_Params.Index, sizeof(SetElementDisplayInfo_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementDisplayInfo_Params.D, sizeof(SetElementDisplayInfo_Params.D), &D, sizeof(D));

	this->ProcessEvent(uFnSetElementDisplayInfo, &SetElementDisplayInfo_Params, nullptr);
};

// Function GFxUI.GFxObject.GetElementDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

struct FMatrix UGFxObject::GetElementDisplayMatrix(int32_t Index)
{
	static UFunction* uFnGetElementDisplayMatrix = nullptr;

	if (!uFnGetElementDisplayMatrix)
	{
		uFnGetElementDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementDisplayMatrix");
	}

	UGFxObject_execGetElementDisplayMatrix_Params GetElementDisplayMatrix_Params;
	memcpy_s(&GetElementDisplayMatrix_Params.Index, sizeof(GetElementDisplayMatrix_Params.Index), &Index, sizeof(Index));

	this->ProcessEvent(uFnGetElementDisplayMatrix, &GetElementDisplayMatrix_Params, nullptr);

	return GetElementDisplayMatrix_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASDisplayInfo          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

struct FASDisplayInfo UGFxObject::GetElementDisplayInfo(int32_t Index)
{
	static UFunction* uFnGetElementDisplayInfo = nullptr;

	if (!uFnGetElementDisplayInfo)
	{
		uFnGetElementDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementDisplayInfo");
	}

	UGFxObject_execGetElementDisplayInfo_Params GetElementDisplayInfo_Params;
	memcpy_s(&GetElementDisplayInfo_Params.Index, sizeof(GetElementDisplayInfo_Params.Index), &Index, sizeof(Index));

	this->ProcessEvent(uFnGetElementDisplayInfo, &GetElementDisplayInfo_Params, nullptr);

	return GetElementDisplayInfo_Params.ReturnValue;
};

// Function GFxUI.GFxObject.SetElementString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElementString(int32_t Index, class FString S)
{
	static UFunction* uFnSetElementString = nullptr;

	if (!uFnSetElementString)
	{
		uFnSetElementString = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementString");
	}

	UGFxObject_execSetElementString_Params SetElementString_Params;
	memcpy_s(&SetElementString_Params.Index, sizeof(SetElementString_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementString_Params.S, sizeof(SetElementString_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnSetElementString, &SetElementString_Params, nullptr);
};

// Function GFxUI.GFxObject.SetElementInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// int32_t                        I                              (CPF_Parm)

void UGFxObject::SetElementInt(int32_t Index, int32_t I)
{
	static UFunction* uFnSetElementInt = nullptr;

	if (!uFnSetElementInt)
	{
		uFnSetElementInt = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementInt");
	}

	UGFxObject_execSetElementInt_Params SetElementInt_Params;
	memcpy_s(&SetElementInt_Params.Index, sizeof(SetElementInt_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementInt_Params.I, sizeof(SetElementInt_Params.I), &I, sizeof(I));

	this->ProcessEvent(uFnSetElementInt, &SetElementInt_Params, nullptr);
};

// Function GFxUI.GFxObject.SetElementFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// float                          F                              (CPF_Parm)

void UGFxObject::SetElementFloat(int32_t Index, float F)
{
	static UFunction* uFnSetElementFloat = nullptr;

	if (!uFnSetElementFloat)
	{
		uFnSetElementFloat = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementFloat");
	}

	UGFxObject_execSetElementFloat_Params SetElementFloat_Params;
	memcpy_s(&SetElementFloat_Params.Index, sizeof(SetElementFloat_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementFloat_Params.F, sizeof(SetElementFloat_Params.F), &F, sizeof(F));

	this->ProcessEvent(uFnSetElementFloat, &SetElementFloat_Params, nullptr);
};

// Function GFxUI.GFxObject.SetElementBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// bool                           B                              (CPF_Parm)

void UGFxObject::SetElementBool(int32_t Index, bool B)
{
	static UFunction* uFnSetElementBool = nullptr;

	if (!uFnSetElementBool)
	{
		uFnSetElementBool = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementBool");
	}

	UGFxObject_execSetElementBool_Params SetElementBool_Params;
	memcpy_s(&SetElementBool_Params.Index, sizeof(SetElementBool_Params.Index), &Index, sizeof(Index));
	SetElementBool_Params.B = B;

	this->ProcessEvent(uFnSetElementBool, &SetElementBool_Params, nullptr);
};

// Function GFxUI.GFxObject.SetElementObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetElementObject(int32_t Index, class UGFxObject* val)
{
	static UFunction* uFnSetElementObject = nullptr;

	if (!uFnSetElementObject)
	{
		uFnSetElementObject = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementObject");
	}

	UGFxObject_execSetElementObject_Params SetElementObject_Params;
	memcpy_s(&SetElementObject_Params.Index, sizeof(SetElementObject_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementObject_Params.val, sizeof(SetElementObject_Params.val), &val, sizeof(val));

	this->ProcessEvent(uFnSetElementObject, &SetElementObject_Params, nullptr);
};

// Function GFxUI.GFxObject.SetElement
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElement(int32_t Index, struct FASValue Arg)
{
	static UFunction* uFnSetElement = nullptr;

	if (!uFnSetElement)
	{
		uFnSetElement = UFunction::FindFunction("Function GFxUI.GFxObject.SetElement");
	}

	UGFxObject_execSetElement_Params SetElement_Params;
	memcpy_s(&SetElement_Params.Index, sizeof(SetElement_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElement_Params.Arg, sizeof(SetElement_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSetElement, &SetElement_Params, nullptr);
};

// Function GFxUI.GFxObject.GetElementString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)

class FString UGFxObject::GetElementString(int32_t Index)
{
	static UFunction* uFnGetElementString = nullptr;

	if (!uFnGetElementString)
	{
		uFnGetElementString = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementString");
	}

	UGFxObject_execGetElementString_Params GetElementString_Params;
	memcpy_s(&GetElementString_Params.Index, sizeof(GetElementString_Params.Index), &Index, sizeof(Index));

	this->ProcessEvent(uFnGetElementString, &GetElementString_Params, nullptr);

	return GetElementString_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

int32_t UGFxObject::GetElementInt(int32_t Index)
{
	static UFunction* uFnGetElementInt = nullptr;

	if (!uFnGetElementInt)
	{
		uFnGetElementInt = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementInt");
	}

	UGFxObject_execGetElementInt_Params GetElementInt_Params;
	memcpy_s(&GetElementInt_Params.Index, sizeof(GetElementInt_Params.Index), &Index, sizeof(Index));

	this->ProcessEvent(uFnGetElementInt, &GetElementInt_Params, nullptr);

	return GetElementInt_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

float UGFxObject::GetElementFloat(int32_t Index)
{
	static UFunction* uFnGetElementFloat = nullptr;

	if (!uFnGetElementFloat)
	{
		uFnGetElementFloat = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementFloat");
	}

	UGFxObject_execGetElementFloat_Params GetElementFloat_Params;
	memcpy_s(&GetElementFloat_Params.Index, sizeof(GetElementFloat_Params.Index), &Index, sizeof(Index));

	this->ProcessEvent(uFnGetElementFloat, &GetElementFloat_Params, nullptr);

	return GetElementFloat_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

bool UGFxObject::GetElementBool(int32_t Index)
{
	static UFunction* uFnGetElementBool = nullptr;

	if (!uFnGetElementBool)
	{
		uFnGetElementBool = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementBool");
	}

	UGFxObject_execGetElementBool_Params GetElementBool_Params;
	memcpy_s(&GetElementBool_Params.Index, sizeof(GetElementBool_Params.Index), &Index, sizeof(Index));

	this->ProcessEvent(uFnGetElementBool, &GetElementBool_Params, nullptr);

	return GetElementBool_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::GetElementObject(int32_t Index, class UClass* Type)
{
	static UFunction* uFnGetElementObject = nullptr;

	if (!uFnGetElementObject)
	{
		uFnGetElementObject = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementObject");
	}

	UGFxObject_execGetElementObject_Params GetElementObject_Params;
	memcpy_s(&GetElementObject_Params.Index, sizeof(GetElementObject_Params.Index), &Index, sizeof(Index));
	memcpy_s(&GetElementObject_Params.Type, sizeof(GetElementObject_Params.Type), &Type, sizeof(Type));

	this->ProcessEvent(uFnGetElementObject, &GetElementObject_Params, nullptr);

	return GetElementObject_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElement
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)

struct FASValue UGFxObject::GetElement(int32_t Index)
{
	static UFunction* uFnGetElement = nullptr;

	if (!uFnGetElement)
	{
		uFnGetElement = UFunction::FindFunction("Function GFxUI.GFxObject.GetElement");
	}

	UGFxObject_execGetElement_Params GetElement_Params;
	memcpy_s(&GetElement_Params.Index, sizeof(GetElement_Params.Index), &Index, sizeof(Index));

	this->ProcessEvent(uFnGetElement, &GetElement_Params, nullptr);

	return GetElement_Params.ReturnValue;
};

// Function GFxUI.GFxObject.SetText
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Text                           (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class UTranslationContext*     InContext                      (CPF_OptionalParm | CPF_Parm)

void UGFxObject::SetText(class FString Text, class UTranslationContext* InContext)
{
	static UFunction* uFnSetText = nullptr;

	if (!uFnSetText)
	{
		uFnSetText = UFunction::FindFunction("Function GFxUI.GFxObject.SetText");
	}

	UGFxObject_execSetText_Params SetText_Params;
	memcpy_s(&SetText_Params.Text, sizeof(SetText_Params.Text), &Text, sizeof(Text));
	memcpy_s(&SetText_Params.InContext, sizeof(SetText_Params.InContext), &InContext, sizeof(InContext));

	this->ProcessEvent(uFnSetText, &SetText_Params, nullptr);
};

// Function GFxUI.GFxObject.GetText
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGFxObject::GetText()
{
	static UFunction* uFnGetText = nullptr;

	if (!uFnGetText)
	{
		uFnGetText = UFunction::FindFunction("Function GFxUI.GFxObject.GetText");
	}

	UGFxObject_execGetText_Params GetText_Params;

	this->ProcessEvent(uFnGetText, &GetText_Params, nullptr);

	return GetText_Params.ReturnValue;
};

// Function GFxUI.GFxObject.SetVisible
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           Visible                        (CPF_Parm)

void UGFxObject::SetVisible(bool Visible)
{
	static UFunction* uFnSetVisible = nullptr;

	if (!uFnSetVisible)
	{
		uFnSetVisible = UFunction::FindFunction("Function GFxUI.GFxObject.SetVisible");
	}

	UGFxObject_execSetVisible_Params SetVisible_Params;
	SetVisible_Params.Visible = Visible;

	this->ProcessEvent(uFnSetVisible, &SetVisible_Params, nullptr);
};

// Function GFxUI.GFxObject.SetDisplayMatrix3D
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 M                              (CPF_Parm)

void UGFxObject::SetDisplayMatrix3D(struct FMatrix M)
{
	static UFunction* uFnSetDisplayMatrix3D = nullptr;

	if (!uFnSetDisplayMatrix3D)
	{
		uFnSetDisplayMatrix3D = UFunction::FindFunction("Function GFxUI.GFxObject.SetDisplayMatrix3D");
	}

	UGFxObject_execSetDisplayMatrix3D_Params SetDisplayMatrix3D_Params;
	memcpy_s(&SetDisplayMatrix3D_Params.M, sizeof(SetDisplayMatrix3D_Params.M), &M, sizeof(M));

	this->ProcessEvent(uFnSetDisplayMatrix3D, &SetDisplayMatrix3D_Params, nullptr);
};

// Function GFxUI.GFxObject.SetDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 M                              (CPF_Parm)

void UGFxObject::SetDisplayMatrix(struct FMatrix M)
{
	static UFunction* uFnSetDisplayMatrix = nullptr;

	if (!uFnSetDisplayMatrix)
	{
		uFnSetDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.SetDisplayMatrix");
	}

	UGFxObject_execSetDisplayMatrix_Params SetDisplayMatrix_Params;
	memcpy_s(&SetDisplayMatrix_Params.M, sizeof(SetDisplayMatrix_Params.M), &M, sizeof(M));

	this->ProcessEvent(uFnSetDisplayMatrix, &SetDisplayMatrix_Params, nullptr);
};

// Function GFxUI.GFxObject.SetColorTransform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASColorTransform       cxform                         (CPF_Parm)

void UGFxObject::SetColorTransform(struct FASColorTransform cxform)
{
	static UFunction* uFnSetColorTransform = nullptr;

	if (!uFnSetColorTransform)
	{
		uFnSetColorTransform = UFunction::FindFunction("Function GFxUI.GFxObject.SetColorTransform");
	}

	UGFxObject_execSetColorTransform_Params SetColorTransform_Params;
	memcpy_s(&SetColorTransform_Params.cxform, sizeof(SetColorTransform_Params.cxform), &cxform, sizeof(cxform));

	this->ProcessEvent(uFnSetColorTransform, &SetColorTransform_Params, nullptr);
};

// Function GFxUI.GFxObject.SetPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)

void UGFxObject::SetPosition(float X, float Y)
{
	static UFunction* uFnSetPosition = nullptr;

	if (!uFnSetPosition)
	{
		uFnSetPosition = UFunction::FindFunction("Function GFxUI.GFxObject.SetPosition");
	}

	UGFxObject_execSetPosition_Params SetPosition_Params;
	memcpy_s(&SetPosition_Params.X, sizeof(SetPosition_Params.X), &X, sizeof(X));
	memcpy_s(&SetPosition_Params.Y, sizeof(SetPosition_Params.Y), &Y, sizeof(Y));

	this->ProcessEvent(uFnSetPosition, &SetPosition_Params, nullptr);
};

// Function GFxUI.GFxObject.SetDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASDisplayInfo          D                              (CPF_Parm)

void UGFxObject::SetDisplayInfo(struct FASDisplayInfo D)
{
	static UFunction* uFnSetDisplayInfo = nullptr;

	if (!uFnSetDisplayInfo)
	{
		uFnSetDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.SetDisplayInfo");
	}

	UGFxObject_execSetDisplayInfo_Params SetDisplayInfo_Params;
	memcpy_s(&SetDisplayInfo_Params.D, sizeof(SetDisplayInfo_Params.D), &D, sizeof(D));

	this->ProcessEvent(uFnSetDisplayInfo, &SetDisplayInfo_Params, nullptr);
};

// Function GFxUI.GFxObject.GetDisplayMatrix3D
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FMatrix UGFxObject::GetDisplayMatrix3D()
{
	static UFunction* uFnGetDisplayMatrix3D = nullptr;

	if (!uFnGetDisplayMatrix3D)
	{
		uFnGetDisplayMatrix3D = UFunction::FindFunction("Function GFxUI.GFxObject.GetDisplayMatrix3D");
	}

	UGFxObject_execGetDisplayMatrix3D_Params GetDisplayMatrix3D_Params;

	this->ProcessEvent(uFnGetDisplayMatrix3D, &GetDisplayMatrix3D_Params, nullptr);

	return GetDisplayMatrix3D_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FMatrix UGFxObject::GetDisplayMatrix()
{
	static UFunction* uFnGetDisplayMatrix = nullptr;

	if (!uFnGetDisplayMatrix)
	{
		uFnGetDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.GetDisplayMatrix");
	}

	UGFxObject_execGetDisplayMatrix_Params GetDisplayMatrix_Params;

	this->ProcessEvent(uFnGetDisplayMatrix, &GetDisplayMatrix_Params, nullptr);

	return GetDisplayMatrix_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetColorTransform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASColorTransform       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FASColorTransform UGFxObject::GetColorTransform()
{
	static UFunction* uFnGetColorTransform = nullptr;

	if (!uFnGetColorTransform)
	{
		uFnGetColorTransform = UFunction::FindFunction("Function GFxUI.GFxObject.GetColorTransform");
	}

	UGFxObject_execGetColorTransform_Params GetColorTransform_Params;

	this->ProcessEvent(uFnGetColorTransform, &GetColorTransform_Params, nullptr);

	return GetColorTransform_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetPosition
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm | CPF_OutParm)
// float                          Y                              (CPF_Parm | CPF_OutParm)

bool UGFxObject::GetPosition(float& X, float& Y)
{
	static UFunction* uFnGetPosition = nullptr;

	if (!uFnGetPosition)
	{
		uFnGetPosition = UFunction::FindFunction("Function GFxUI.GFxObject.GetPosition");
	}

	UGFxObject_execGetPosition_Params GetPosition_Params;
	memcpy_s(&GetPosition_Params.X, sizeof(GetPosition_Params.X), &X, sizeof(X));
	memcpy_s(&GetPosition_Params.Y, sizeof(GetPosition_Params.Y), &Y, sizeof(Y));

	this->ProcessEvent(uFnGetPosition, &GetPosition_Params, nullptr);

	memcpy_s(&X, sizeof(X), &GetPosition_Params.X, sizeof(GetPosition_Params.X));
	memcpy_s(&Y, sizeof(Y), &GetPosition_Params.Y, sizeof(GetPosition_Params.Y));

	return GetPosition_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASDisplayInfo          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FASDisplayInfo UGFxObject::GetDisplayInfo()
{
	static UFunction* uFnGetDisplayInfo = nullptr;

	if (!uFnGetDisplayInfo)
	{
		uFnGetDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.GetDisplayInfo");
	}

	UGFxObject_execGetDisplayInfo_Params GetDisplayInfo_Params;

	this->ProcessEvent(uFnGetDisplayInfo, &GetDisplayInfo_Params, nullptr);

	return GetDisplayInfo_Params.ReturnValue;
};

// Function GFxUI.GFxObject.TranslateString
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  StringToTranslate              (CPF_Parm | CPF_NeedCtorLink)
// class UTranslationContext*     InContext                      (CPF_OptionalParm | CPF_Parm)

class FString UGFxObject::TranslateString(class FString StringToTranslate, class UTranslationContext* InContext)
{
	static UFunction* uFnTranslateString = nullptr;

	if (!uFnTranslateString)
	{
		uFnTranslateString = UFunction::FindFunction("Function GFxUI.GFxObject.TranslateString");
	}

	UGFxObject_execTranslateString_Params TranslateString_Params;
	memcpy_s(&TranslateString_Params.StringToTranslate, sizeof(TranslateString_Params.StringToTranslate), &StringToTranslate, sizeof(StringToTranslate));
	memcpy_s(&TranslateString_Params.InContext, sizeof(TranslateString_Params.InContext), &InContext, sizeof(InContext));

	UGFxObject::StaticClass()->ProcessEvent(uFnTranslateString, &TranslateString_Params, nullptr);

	return TranslateString_Params.ReturnValue;
};

// Function GFxUI.GFxObject.SetFunction
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UObject*                 Context                        (CPF_Parm)
// struct FName                   fname                          (CPF_Parm)

void UGFxObject::SetFunction(class FString Member, class UObject* Context, struct FName fname)
{
	static UFunction* uFnSetFunction = nullptr;

	if (!uFnSetFunction)
	{
		uFnSetFunction = UFunction::FindFunction("Function GFxUI.GFxObject.SetFunction");
	}

	UGFxObject_execSetFunction_Params SetFunction_Params;
	memcpy_s(&SetFunction_Params.Member, sizeof(SetFunction_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetFunction_Params.Context, sizeof(SetFunction_Params.Context), &Context, sizeof(Context));
	memcpy_s(&SetFunction_Params.fname, sizeof(SetFunction_Params.fname), &fname, sizeof(fname));

	this->ProcessEvent(uFnSetFunction, &SetFunction_Params, nullptr);
};

// Function GFxUI.GFxObject.SetObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetObject(class FString Member, class UGFxObject* val)
{
	static UFunction* uFnSetObject = nullptr;

	if (!uFnSetObject)
	{
		uFnSetObject = UFunction::FindFunction("Function GFxUI.GFxObject.SetObject");
	}

	UGFxObject_execSetObject_Params SetObject_Params;
	memcpy_s(&SetObject_Params.Member, sizeof(SetObject_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetObject_Params.val, sizeof(SetObject_Params.val), &val, sizeof(val));

	this->ProcessEvent(uFnSetObject, &SetObject_Params, nullptr);
};

// Function GFxUI.GFxObject.SetString
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)
// class UTranslationContext*     InContext                      (CPF_OptionalParm | CPF_Parm)

void UGFxObject::SetString(class FString Member, class FString S, class UTranslationContext* InContext)
{
	static UFunction* uFnSetString = nullptr;

	if (!uFnSetString)
	{
		uFnSetString = UFunction::FindFunction("Function GFxUI.GFxObject.SetString");
	}

	UGFxObject_execSetString_Params SetString_Params;
	memcpy_s(&SetString_Params.Member, sizeof(SetString_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetString_Params.S, sizeof(SetString_Params.S), &S, sizeof(S));
	memcpy_s(&SetString_Params.InContext, sizeof(SetString_Params.InContext), &InContext, sizeof(InContext));

	this->ProcessEvent(uFnSetString, &SetString_Params, nullptr);
};

// Function GFxUI.GFxObject.SetInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)

void UGFxObject::SetInt(class FString Member, int32_t I)
{
	static UFunction* uFnSetInt = nullptr;

	if (!uFnSetInt)
	{
		uFnSetInt = UFunction::FindFunction("Function GFxUI.GFxObject.SetInt");
	}

	UGFxObject_execSetInt_Params SetInt_Params;
	memcpy_s(&SetInt_Params.Member, sizeof(SetInt_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetInt_Params.I, sizeof(SetInt_Params.I), &I, sizeof(I));

	this->ProcessEvent(uFnSetInt, &SetInt_Params, nullptr);
};

// Function GFxUI.GFxObject.SetFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// float                          F                              (CPF_Parm)

void UGFxObject::SetFloat(class FString Member, float F)
{
	static UFunction* uFnSetFloat = nullptr;

	if (!uFnSetFloat)
	{
		uFnSetFloat = UFunction::FindFunction("Function GFxUI.GFxObject.SetFloat");
	}

	UGFxObject_execSetFloat_Params SetFloat_Params;
	memcpy_s(&SetFloat_Params.Member, sizeof(SetFloat_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetFloat_Params.F, sizeof(SetFloat_Params.F), &F, sizeof(F));

	this->ProcessEvent(uFnSetFloat, &SetFloat_Params, nullptr);
};

// Function GFxUI.GFxObject.SetBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// bool                           B                              (CPF_Parm)

void UGFxObject::SetBool(class FString Member, bool B)
{
	static UFunction* uFnSetBool = nullptr;

	if (!uFnSetBool)
	{
		uFnSetBool = UFunction::FindFunction("Function GFxUI.GFxObject.SetBool");
	}

	UGFxObject_execSetBool_Params SetBool_Params;
	memcpy_s(&SetBool_Params.Member, sizeof(SetBool_Params.Member), &Member, sizeof(Member));
	SetBool_Params.B = B;

	this->ProcessEvent(uFnSetBool, &SetBool_Params, nullptr);
};

// Function GFxUI.GFxObject.Set
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::Set(class FString Member, struct FASValue Arg)
{
	static UFunction* uFnSet = nullptr;

	if (!uFnSet)
	{
		uFnSet = UFunction::FindFunction("Function GFxUI.GFxObject.Set");
	}

	UGFxObject_execSet_Params Set_Params;
	memcpy_s(&Set_Params.Member, sizeof(Set_Params.Member), &Member, sizeof(Member));
	memcpy_s(&Set_Params.Arg, sizeof(Set_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSet, &Set_Params, nullptr);
};

// Function GFxUI.GFxObject.GetObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::GetObjectW(class FString Member, class UClass* Type)
{
	static UFunction* uFnGetObjectW = nullptr;

	if (!uFnGetObjectW)
	{
		uFnGetObjectW = UFunction::FindFunction("Function GFxUI.GFxObject.GetObject");
	}

	UGFxObject_execGetObjectW_Params GetObjectW_Params;
	memcpy_s(&GetObjectW_Params.Member, sizeof(GetObjectW_Params.Member), &Member, sizeof(Member));
	memcpy_s(&GetObjectW_Params.Type, sizeof(GetObjectW_Params.Type), &Type, sizeof(Type));

	this->ProcessEvent(uFnGetObjectW, &GetObjectW_Params, nullptr);

	return GetObjectW_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

class FString UGFxObject::GetString(class FString Member)
{
	static UFunction* uFnGetString = nullptr;

	if (!uFnGetString)
	{
		uFnGetString = UFunction::FindFunction("Function GFxUI.GFxObject.GetString");
	}

	UGFxObject_execGetString_Params GetString_Params;
	memcpy_s(&GetString_Params.Member, sizeof(GetString_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetString, &GetString_Params, nullptr);

	return GetString_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

int32_t UGFxObject::GetInt(class FString Member)
{
	static UFunction* uFnGetInt = nullptr;

	if (!uFnGetInt)
	{
		uFnGetInt = UFunction::FindFunction("Function GFxUI.GFxObject.GetInt");
	}

	UGFxObject_execGetInt_Params GetInt_Params;
	memcpy_s(&GetInt_Params.Member, sizeof(GetInt_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetInt, &GetInt_Params, nullptr);

	return GetInt_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

float UGFxObject::GetFloat(class FString Member)
{
	static UFunction* uFnGetFloat = nullptr;

	if (!uFnGetFloat)
	{
		uFnGetFloat = UFunction::FindFunction("Function GFxUI.GFxObject.GetFloat");
	}

	UGFxObject_execGetFloat_Params GetFloat_Params;
	memcpy_s(&GetFloat_Params.Member, sizeof(GetFloat_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetFloat, &GetFloat_Params, nullptr);

	return GetFloat_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

bool UGFxObject::GetBool(class FString Member)
{
	static UFunction* uFnGetBool = nullptr;

	if (!uFnGetBool)
	{
		uFnGetBool = UFunction::FindFunction("Function GFxUI.GFxObject.GetBool");
	}

	UGFxObject_execGetBool_Params GetBool_Params;
	memcpy_s(&GetBool_Params.Member, sizeof(GetBool_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetBool, &GetBool_Params, nullptr);

	return GetBool_Params.ReturnValue;
};

// Function GFxUI.GFxObject.Get
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxObject::Get(class FString Member)
{
	static UFunction* uFnGet = nullptr;

	if (!uFnGet)
	{
		uFnGet = UFunction::FindFunction("Function GFxUI.GFxObject.Get");
	}

	UGFxObject_execGet_Params Get_Params;
	memcpy_s(&Get_Params.Member, sizeof(Get_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGet, &Get_Params, nullptr);

	return Get_Params.ReturnValue;
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_CloseMovie::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject");
	}

	UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_GetVariable::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject");
	}

	UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_Invoke::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject");
	}

	UGFxAction_Invoke_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_OpenMovie::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject");
	}

	UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_SetVariable::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject");
	}

	UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x400020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGFxMoviePlayer*         Movie                          (CPF_Parm)
// class UGFxEvent_FSCommand*     Event                          (CPF_Parm)
// class FString                  Cmd                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxFSCmdHandler_Kismet::eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, class FString Cmd, class FString Arg)
{
	static UFunction* uFnFSCommand = nullptr;

	if (!uFnFSCommand)
	{
		uFnFSCommand = UFunction::FindFunction("Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand");
	}

	UGFxFSCmdHandler_Kismet_eventFSCommand_Params FSCommand_Params;
	memcpy_s(&FSCommand_Params.Movie, sizeof(FSCommand_Params.Movie), &Movie, sizeof(Movie));
	memcpy_s(&FSCommand_Params.Event, sizeof(FSCommand_Params.Event), &Event, sizeof(Event));
	memcpy_s(&FSCommand_Params.Cmd, sizeof(FSCommand_Params.Cmd), &Cmd, sizeof(Cmd));
	memcpy_s(&FSCommand_Params.Arg, sizeof(FSCommand_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnFSCommand, &FSCommand_Params, nullptr);

	return FSCommand_Params.ReturnValue;
};

// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  Event                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::ASRemoveAllEventListeners(class FString Event)
{
	static UFunction* uFnASRemoveAllEventListeners = nullptr;

	if (!uFnASRemoveAllEventListeners)
	{
		uFnASRemoveAllEventListeners = UFunction::FindFunction("Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners");
	}

	UGFxClikWidget_execASRemoveAllEventListeners_Params ASRemoveAllEventListeners_Params;
	memcpy_s(&ASRemoveAllEventListeners_Params.Event, sizeof(ASRemoveAllEventListeners_Params.Event), &Event, sizeof(Event));

	this->ProcessEvent(uFnASRemoveAllEventListeners, &ASRemoveAllEventListeners_Params, nullptr);
};

// Function GFxUI.GFxClikWidget.AS3AddEventListener
// [0x00044003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  Type                           (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              O                              (CPF_Parm)
// bool                           useCapture                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        listenerPriority               (CPF_OptionalParm | CPF_Parm)
// bool                           useWeakReference               (CPF_OptionalParm | CPF_Parm)

void UGFxClikWidget::AS3AddEventListener(class FString Type, class UGFxObject* O, bool useCapture, int32_t listenerPriority, bool useWeakReference)
{
	static UFunction* uFnAS3AddEventListener = nullptr;

	if (!uFnAS3AddEventListener)
	{
		uFnAS3AddEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.AS3AddEventListener");
	}

	UGFxClikWidget_execAS3AddEventListener_Params AS3AddEventListener_Params;
	memcpy_s(&AS3AddEventListener_Params.Type, sizeof(AS3AddEventListener_Params.Type), &Type, sizeof(Type));
	memcpy_s(&AS3AddEventListener_Params.O, sizeof(AS3AddEventListener_Params.O), &O, sizeof(O));
	AS3AddEventListener_Params.useCapture = useCapture;
	memcpy_s(&AS3AddEventListener_Params.listenerPriority, sizeof(AS3AddEventListener_Params.listenerPriority), &listenerPriority, sizeof(listenerPriority));
	AS3AddEventListener_Params.useWeakReference = useWeakReference;

	this->ProcessEvent(uFnAS3AddEventListener, &AS3AddEventListener_Params, nullptr);
};

// Function GFxUI.GFxClikWidget.ASAddEventListener
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  Type                           (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              O                              (CPF_Parm)
// class FString                  func                           (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::ASAddEventListener(class FString Type, class UGFxObject* O, class FString func)
{
	static UFunction* uFnASAddEventListener = nullptr;

	if (!uFnASAddEventListener)
	{
		uFnASAddEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.ASAddEventListener");
	}

	UGFxClikWidget_execASAddEventListener_Params ASAddEventListener_Params;
	memcpy_s(&ASAddEventListener_Params.Type, sizeof(ASAddEventListener_Params.Type), &Type, sizeof(Type));
	memcpy_s(&ASAddEventListener_Params.O, sizeof(ASAddEventListener_Params.O), &O, sizeof(O));
	memcpy_s(&ASAddEventListener_Params.func, sizeof(ASAddEventListener_Params.func), &func, sizeof(func));

	this->ProcessEvent(uFnASAddEventListener, &ASAddEventListener_Params, nullptr);
};

// Function GFxUI.GFxClikWidget.SetListener
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              O                              (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Listener                       (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::SetListener(class UGFxObject* O, class FString Member, struct FScriptDelegate Listener)
{
	static UFunction* uFnSetListener = nullptr;

	if (!uFnSetListener)
	{
		uFnSetListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.SetListener");
	}

	UGFxClikWidget_execSetListener_Params SetListener_Params;
	memcpy_s(&SetListener_Params.O, sizeof(SetListener_Params.O), &O, sizeof(O));
	memcpy_s(&SetListener_Params.Member, sizeof(SetListener_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetListener_Params.Listener, sizeof(SetListener_Params.Listener), &Listener, sizeof(Listener));

	this->ProcessEvent(uFnSetListener, &SetListener_Params, nullptr);
};

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FName                   Typename                       (CPF_Parm)

class FString UGFxClikWidget::GetEventStringFromTypename(struct FName Typename)
{
	static UFunction* uFnGetEventStringFromTypename = nullptr;

	if (!uFnGetEventStringFromTypename)
	{
		uFnGetEventStringFromTypename = UFunction::FindFunction("Function GFxUI.GFxClikWidget.GetEventStringFromTypename");
	}

	UGFxClikWidget_execGetEventStringFromTypename_Params GetEventStringFromTypename_Params;
	memcpy_s(&GetEventStringFromTypename_Params.Typename, sizeof(GetEventStringFromTypename_Params.Typename), &Typename, sizeof(Typename));

	this->ProcessEvent(uFnGetEventStringFromTypename, &GetEventStringFromTypename_Params, nullptr);

	return GetEventStringFromTypename_Params.ReturnValue;
};

// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Event                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::RemoveAllEventListeners(class FString Event)
{
	static UFunction* uFnRemoveAllEventListeners = nullptr;

	if (!uFnRemoveAllEventListeners)
	{
		uFnRemoveAllEventListeners = UFunction::FindFunction("Function GFxUI.GFxClikWidget.RemoveAllEventListeners");
	}

	UGFxClikWidget_execRemoveAllEventListeners_Params RemoveAllEventListeners_Params;
	memcpy_s(&RemoveAllEventListeners_Params.Event, sizeof(RemoveAllEventListeners_Params.Event), &Event, sizeof(Event));

	this->ProcessEvent(uFnRemoveAllEventListeners, &RemoveAllEventListeners_Params, nullptr);
};

// Function GFxUI.GFxClikWidget.AddEventListener
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Type                           (CPF_Parm)
// struct FScriptDelegate         Listener                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           useCapture                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        listenerPriority               (CPF_OptionalParm | CPF_Parm)
// bool                           useWeakReference               (CPF_OptionalParm | CPF_Parm)

void UGFxClikWidget::AddEventListener(struct FName Type, struct FScriptDelegate Listener, bool useCapture, int32_t listenerPriority, bool useWeakReference)
{
	static UFunction* uFnAddEventListener = nullptr;

	if (!uFnAddEventListener)
	{
		uFnAddEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.AddEventListener");
	}

	UGFxClikWidget_execAddEventListener_Params AddEventListener_Params;
	memcpy_s(&AddEventListener_Params.Type, sizeof(AddEventListener_Params.Type), &Type, sizeof(Type));
	memcpy_s(&AddEventListener_Params.Listener, sizeof(AddEventListener_Params.Listener), &Listener, sizeof(Listener));
	AddEventListener_Params.useCapture = useCapture;
	memcpy_s(&AddEventListener_Params.listenerPriority, sizeof(AddEventListener_Params.listenerPriority), &listenerPriority, sizeof(listenerPriority));
	AddEventListener_Params.useWeakReference = useWeakReference;

	this->ProcessEvent(uFnAddEventListener, &AddEventListener_Params, nullptr);
};

// Function GFxUI.GFxClikWidget.EventListener
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              Data                           (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::EventListener(struct FEventData Data)
{
	static UFunction* uFnEventListener = nullptr;

	if (!uFnEventListener)
	{
		uFnEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.EventListener");
	}

	UGFxClikWidget_execEventListener_Params EventListener_Params;
	memcpy_s(&EventListener_Params.Data, sizeof(EventListener_Params.Data), &Data, sizeof(Data));

	this->ProcessEvent(uFnEventListener, &EventListener_Params, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
