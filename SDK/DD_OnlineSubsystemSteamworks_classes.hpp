#pragma once

// Dungeon Defenders (9.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x008C (0x01EC - 0x0160)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	TArray<struct FServerQueryToRulesResponseMapping>  QueryToRulesResponseMap;                                  // 0x0160(0x000C)
	TArray<struct FServerQueryToPingResponseMapping>   QueryToPingResponseMap;                                   // 0x016C(0x000C)
	TArray<int>                                        ServerIndexMap;                                           // 0x0178(0x000C)
	struct FPointer                                    ServerListResponse;                                       // 0x0184(0x0004)
	TEnumAsByte<ESteamMatchmakingType>                 CurrentMatchmakingType;                                   // 0x0188(0x0001)
	TEnumAsByte<ESteamCreateGameFailure>               LastCreateGameFailure;                                    // 0x0189(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x018A(0x0002) MISSED OFFSET
	struct FPointer                                    CurrentMatchmakingQuery;                                  // 0x018C(0x0004)
	struct FPointer                                    CallbackBridge;                                           // 0x0190(0x0004)
	TArray<struct FScriptDelegate>                     GameInviteAcceptedDelegates;                              // 0x0194(0x000C)
	class UOnlineGameSearch*                           InviteGameSearch;                                         // 0x01A0(0x0004)
	struct FString                                     InviteLocationUrl;                                        // 0x01A4(0x000C)
	TArray<struct FScriptDelegate>                     RegisterPlayerCompleteDelegates;                          // 0x01B0(0x000C)
	TArray<struct FScriptDelegate>                     UnregisterPlayerCompleteDelegates;                        // 0x01BC(0x000C)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                         // 0x01C8(0x000C)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;                     // 0x01D4(0x000C)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;                   // 0x01E0(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks");
		return ptr;
	}


	void CreateOnlineGameFailureID();
	void GetResolvedConnectString();
	void QueryNonAdvertisedData();
	void ClearUnregisterPlayerCompleteDelegate();
	void AddUnregisterPlayerCompleteDelegate();
	void OnUnregisterPlayerComplete();
	void UnregisterPlayer();
	void ClearRegisterPlayerCompleteDelegate();
	void AddRegisterPlayerCompleteDelegate();
	void OnRegisterPlayerComplete();
	void RegisterPlayer();
	void AcceptGameInvite();
	void OnGameInviteAccepted();
	void ClearGameInviteAcceptedDelegate();
	void AddGameInviteAcceptedDelegate();
	void UpdateOnlineGame();
};


// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x05D8 (0x06C8 - 0x00F0)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    CallbackBridge;                                           // 0x00F0(0x0004)
	unsigned long                                      bStoringAchievement : 1;                                  // 0x00F4(0x0004)
	unsigned long                                      bGSStatsStoresSuccess : 1;                                // 0x00F4(0x0004)
	unsigned long                                      bNeedsKeyboardTicking : 1;                                // 0x00F4(0x0004)
	unsigned long                                      bLastHasConnection : 1;                                   // 0x00F4(0x0004)
	unsigned long                                      bIsStatsSessionOk : 1;                                    // 0x00F4(0x0004)
	unsigned long                                      bHasSteamworksAccount : 1;                                // 0x00F4(0x0004)
	unsigned long                                      bShouldUseMcp : 1;                                        // 0x00F4(0x0004)
	unsigned long                                      bListenHostPendingAuth : 1;                               // 0x00F4(0x0004)
	unsigned long                                      bListenHostAuthenticated : 1;                             // 0x00F4(0x0004)
	unsigned long                                      bIncrementStatValues : 1;                                 // 0x00F4(0x0004)
	int                                                TotalGSStatsStoresPending;                                // 0x00F8(0x0004)
	TEnumAsByte<EOnlineEnumerationReadState>           UserStatsReceivedState;                                   // 0x00FC(0x0001)
	TEnumAsByte<ELoginStatus>                          LoggedInStatus;                                           // 0x00FD(0x0001)
	unsigned char                                      bWasKeyboardInputCanceled;                                // 0x00FE(0x0001)
	TEnumAsByte<ENetworkNotificationPosition>          CurrentNotificationPosition;                              // 0x00FF(0x0001)
	unsigned char                                      ListenAuthRetryCount;                                     // 0x0100(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                            // 0x0104(0x0004)
	struct FString                                     LocalProfileName;                                         // 0x0108(0x000C)
	struct FString                                     LoggedInPlayerName;                                       // 0x0114(0x000C)
	struct FUniqueNetId                                LoggedInPlayerId;                                         // 0x0120(0x0008)
	int                                                LoggedInPlayerNum;                                        // 0x0128(0x0004)
	struct FString                                     ProfileDataDirectory;                                     // 0x012C(0x000C)
	struct FString                                     ProfileDataExtension;                                     // 0x0138(0x000C)
	TArray<struct FScriptDelegate>                     WriteProfileSettingsDelegates;                            // 0x0144(0x000C)
	class UOnlineProfileSettings*                      CachedProfile;                                            // 0x0150(0x0004)
	TArray<struct FScriptDelegate>                     LocalPlayerStorageReadDelegates;                          // 0x0154(0x000C)
	TArray<struct FScriptDelegate>                     LocalPlayerStorageWriteDelegates;                         // 0x0160(0x000C)
	TArray<struct FScriptDelegate>                     RemotePlayerStorageReadDelegates;                         // 0x016C(0x000C)
	TArray<struct FScriptDelegate>                     SpeechRecognitionCompleteDelegates;                       // 0x0178(0x000C)
	TArray<struct FScriptDelegate>                     ReadFriendsDelegates;                                     // 0x0184(0x000C)
	TArray<struct FScriptDelegate>                     FriendsChangeDelegates;                                   // 0x0190(0x000C)
	TArray<struct FScriptDelegate>                     MutingChangeDelegates;                                    // 0x019C(0x000C)
	TArray<struct FScriptDelegate>                     LoginChangeDelegates;                                     // 0x01A8(0x000C)
	TArray<struct FScriptDelegate>                     LoginFailedDelegates;                                     // 0x01B4(0x000C)
	TArray<struct FScriptDelegate>                     LogoutCompletedDelegates;                                 // 0x01C0(0x000C)
	TArray<struct FScriptDelegate>                     AccountCreateDelegates;                                   // 0x01CC(0x000C)
	TArray<struct FScriptDelegate>                     TalkingDelegates;                                         // 0x01D8(0x000C)
	TArray<struct FScriptDelegate>                     PlayerStartedTalkingDelegates;                            // 0x01E4(0x000C)
	TArray<struct FScriptDelegate>                     PlayerStoppedTalkingDelegates;                            // 0x01F0(0x000C)
	TArray<struct FScriptDelegate>                     ReadOnlineStatsCompleteDelegates;                         // 0x01FC(0x000C)
	TArray<struct FScriptDelegate>                     FlushOnlineStatsDelegates;                                // 0x0208(0x000C)
	TArray<struct FScriptDelegate>                     ConnectionStatusChangeDelegates;                          // 0x0214(0x000C)
	TArray<struct FScriptDelegate>                     ControllerChangeDelegates;                                // 0x0220(0x000C)
	TArray<struct FScriptDelegate>                     LinkStatusDelegates;                                      // 0x022C(0x000C)
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                           // 0x0238(0x000C)
	TArray<struct FScriptDelegate>                     AchievementDelegates;                                     // 0x0244(0x000C)
	TArray<struct FScriptDelegate>                     AchievementReadDelegates;                                 // 0x0250(0x000C)
	struct FLocalTalkerSteam                           CurrentLocalTalker;                                       // 0x025C(0x0008)
	TArray<struct FRemoteTalker>                       RemoteTalkers;                                            // 0x0264(0x000C)
	int                                                GameID;                                                   // 0x0270(0x0004)
	class UOnlineStatsRead*                            CurrentStatsRead;                                         // 0x0274(0x0004)
	TArray<struct FPendingPlayerStats>                 PendingStats;                                             // 0x0278(0x000C)
	struct FString                                     KeyboardResultsString;                                    // 0x0284(0x000C)
	TArray<struct FScriptDelegate>                     KeyboardInputDelegates;                                   // 0x0290(0x000C)
	TArray<struct FScriptDelegate>                     FriendInviteReceivedDelegates;                            // 0x029C(0x000C)
	TArray<struct FScriptDelegate>                     FriendMessageReceivedDelegates;                           // 0x02A8(0x000C)
	TArray<struct FScriptDelegate>                     AddFriendByNameCompleteDelegates;                         // 0x02B4(0x000C)
	struct FProfileSettingsCache                       ProfileCache;                                             // 0x02C0(0x0028)
	class UOnlinePlayerStorage*                        PlayerStorageCache;                                       // 0x02E8(0x0004)
	struct FString                                     CachedFriendMessage;                                      // 0x02EC(0x000C)
	struct FDeviceIdCache                              DeviceCache;                                              // 0x02F8(0x001C)
	TArray<struct FString>                             LocationUrlsForInvites;                                   // 0x0314(0x000C)
	struct FString                                     LocationUrl;                                              // 0x0320(0x000C)
	TArray<struct FMappedAchievement>                  AchievementMapping;                                       // 0x032C(0x000C)
	TArray<struct FScriptDelegate>                     ReceivedGameInviteDelegates;                              // 0x0338(0x000C)
	TArray<struct FScriptDelegate>                     JoinFriendGameCompleteDelegates;                          // 0x0344(0x000C)
	TArray<struct FScriptDelegate>                     GetNumberOfCurrentPlayersCompleteDelegates;               // 0x0350(0x000C)
	TArray<struct FScriptDelegate>                     RegisterHostStatGuidCompleteDelegates;                    // 0x035C(0x000C)
	TArray<struct FOnlineFriendMessage>                CachedFriendMessages;                                     // 0x0368(0x000C)
	TArray<struct FOnlineStatusMapping>                StatusMappings;                                           // 0x0374(0x000C)
	struct FString                                     DefaultStatus;                                            // 0x0380(0x000C)
	struct FString                                     GameInviteMessage;                                        // 0x038C(0x000C)
	struct FControllerConnectionState                  ControllerStates[0x4];                                    // 0x0398(0x0008)
	float                                              ConnectionPresenceTimeInterval;                           // 0x03B8(0x0004)
	float                                              ConnectionPresenceElapsedTime;                            // 0x03BC(0x0004)
	struct FString                                     EncryptedProductKey;                                      // 0x03C0(0x000C)
	int                                                NextAuthId;                                               // 0x03CC(0x0004)
	struct FString                                     ServerChallenge;                                          // 0x03D0(0x000C)
	struct FString                                     ServerResponse;                                           // 0x03DC(0x000C)
	int                                                ServerLocalId;                                            // 0x03E8(0x0004)
	TArray<struct FUniqueNetId>                        MuteList;                                                 // 0x03EC(0x000C)
	TArray<struct FQueuedAvatarRequest>                QueuedAvatarRequests;                                     // 0x03F8(0x000C)
	TArray<struct FAchievementMappingInfo>             AchievementMappings;                                      // 0x0404(0x000C)
	TArray<struct FAchievementProgressStat>            PendingAchievementProgress;                               // 0x0410(0x000C)
	TArray<struct FLeaderboardTemplate>                LeaderboardList;                                          // 0x041C(0x000C)
	int                                                PendingLeaderboardInits;                                  // 0x0428(0x0004)
	int                                                PendingLeaderboardReads;                                  // 0x042C(0x0004)
	int                                                PendingLeaderboardWrites;                                 // 0x0430(0x0004)
	TArray<struct FDeferredLeaderboardRead>            DeferredLeaderboardReads;                                 // 0x0434(0x000C)
	TArray<struct FDeferredLeaderboardWrite>           DeferredLeaderboardWrites;                                // 0x0440(0x000C)
	TArray<struct FDeferredLeaderboardWrite>           PendingLeaderboardStats;                                  // 0x044C(0x000C)
	TArray<struct FTalkerIDMap>                        TalkerAudioComponentMap;                                  // 0x0458(0x000C)
	float                                              PlaybackVolume;                                           // 0x0464(0x0004)
	float                                              CaptureVolume;                                            // 0x0468(0x0004)
	TArray<struct FScriptDelegate>                     QuerySubscribedDelegates;                                 // 0x046C(0x000C)
	TArray<struct FLeaderboardEntry>                   ProcessedLeaderboardReads;                                // 0x0478(0x000C)
	TArray<struct FViewIdToLeaderboardName>            LeaderboardNameMappings;                                  // 0x0484(0x000C)
	float                                              ListenAuthTimestamp;                                      // 0x0490(0x0004)
	TArray<struct FUniqueNetId>                        StatsReadList;                                            // 0x0494(0x000C)
	struct FScriptDelegate                             __OnLoginChange__Delegate;                                // 0x04A0(0x000C)
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                             // 0x04AC(0x000C)
	struct FScriptDelegate                             __OnMutingChange__Delegate;                               // 0x04B8(0x000C)
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                              // 0x04C4(0x000C)
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                                // 0x04D0(0x000C)
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                            // 0x04DC(0x000C)
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                          // 0x04E8(0x000C)
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;                // 0x04F4(0x000C)
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;               // 0x0500(0x000C)
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;                  // 0x050C(0x000C)
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;          // 0x0518(0x000C)
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;                 // 0x0524(0x000C)
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                        // 0x0530(0x000C)
	struct FScriptDelegate                             __OnPlayerBeginTalking__Delegate;                         // 0x053C(0x000C)
	struct FScriptDelegate                             __OnPlayerStopTalking__Delegate;                          // 0x0548(0x000C)
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                        // 0x0554(0x000C)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;                    // 0x0560(0x000C)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;                   // 0x056C(0x000C)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                           // 0x0578(0x000C)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                           // 0x0584(0x000C)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                           // 0x0590(0x000C)
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;                     // 0x059C(0x000C)
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                        // 0x05A8(0x000C)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;                      // 0x05B4(0x000C)
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;               // 0x05C0(0x000C)
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;                      // 0x05CC(0x000C)
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;                    // 0x05D8(0x000C)
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;                       // 0x05E4(0x000C)
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                         // 0x05F0(0x000C)
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;                     // 0x05FC(0x000C)
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;                      // 0x0608(0x000C)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;               // 0x0614(0x000C)
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;                    // 0x0620(0x000C)
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;                  // 0x062C(0x000C)
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                         // 0x0638(0x000C)
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;                   // 0x0644(0x000C)
	struct FScriptDelegate                             __OnReadOnlineAvatarComplete__Delegate;                   // 0x0650(0x000C)
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;          // 0x065C(0x000C)
	struct FScriptDelegate                             __OnFindUniqueNetIdForPlayerComplete__Delegate;           // 0x0668(0x000C)
	struct FScriptDelegate                             __OnDeviceFound__Delegate;                                // 0x0674(0x000C)
	struct FScriptDelegate                             __OnDLCStorageDeviceRemoved__Delegate;                    // 0x0680(0x000C)
	struct FScriptDelegate                             __OnStringVerificationComplete__Delegate;                 // 0x068C(0x000C)
	struct FScriptDelegate                             __OnContentChange__Delegate;                              // 0x0698(0x000C)
	struct FScriptDelegate                             __OnReadContentComplete__Delegate;                        // 0x06A4(0x000C)
	struct FScriptDelegate                             __OnQueryAvailableDownloadsComplete__Delegate;            // 0x06B0(0x000C)
	struct FScriptDelegate                             __OnQuerySubscribedDownloadsComplete__Delegate;           // 0x06BC(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks");
		return ptr;
	}


	void ClearQuerySubscribedDownloadsComplete();
	void AddQuerySubscribedDownloadsComplete();
	void OnQuerySubscribedDownloadsComplete();
	void SubscribedDownloadsInformation();
	void QuerySubscribedDownloads();
	void GetAvailableDownloadCounts();
	void ClearQueryAvailableDownloadsComplete();
	void AddQueryAvailableDownloadsComplete();
	void OnQueryAvailableDownloadsComplete();
	void QueryAvailableDownloads();
	void GetContentList();
	void ReadContentList();
	void ClearReadContentComplete();
	void AddReadContentComplete();
	void OnReadContentComplete();
	void ClearContentChangeDelegate();
	void AddContentChangeDelegate();
	void OnContentChange();
	void Exit();
	void VerifyStrings();
	void ClearStringVerificationDelegate();
	void AddStringVerificationDelegate();
	void OnStringVerificationComplete();
	void ClearDLCStorageDeviceRemovedDelegate();
	void AddDLCStorageDeviceRemovedDelegate();
	void OnDLCStorageDeviceRemoved();
	void ClearAllFlushOnlineStatsCompleteDelegates();
	void ClearDeviceFoundDelegate();
	void AddDeviceFoundDelegate();
	void OnDeviceFound();
	void HasBeenRegistered();
	void SetCaptureVolume();
	void SetPlaybackVolume();
	void CancelLogin();
	void ManageInvites();
	void FindUniqueNetIdForPlayer();
	void ClearFindUniqueNetIdForPlayerDelegate();
	void AddFindUniqueNetIdForPlayerDelegate();
	void OnFindUniqueNetIdForPlayerComplete();
	void AddToPlayersMetList();
	void CreateLeaderboard();
	void ClearGetNumberOfCurrentPlayersCompleteDelegate();
	void AddGetNumberOfCurrentPlayersCompleteDelegate();
	void OnGetNumberOfCurrentPlayersComplete();
	void GetNumberOfCurrentPlayers();
	void ReadOnlineAvatar();
	void OnReadOnlineAvatarComplete();
	void ShowCustomPlayersUI();
	void GetAchievements();
	void ClearReadAchievementsCompleteDelegate();
	void AddReadAchievementsCompleteDelegate();
	void OnReadAchievementsComplete();
	void ReadAchievements();
	void ShowPlayersUI();
	void ShowFriendsInviteUI();
	void ShowFriendsUI();
	void ClearProfileDataChangedDelegate();
	void AddProfileDataChangedDelegate();
	void OnProfileDataChanged();
	void UnlockGamerPicture();
	void ClearUnlockAchievementCompleteDelegate();
	void AddUnlockAchievementCompleteDelegate();
	void OnUnlockAchievementComplete();
	void UnlockAchievement();
	void IsDeviceValid();
	void GetDeviceSelectionResults();
	void ClearDeviceSelectionDoneDelegate();
	void AddDeviceSelectionDoneDelegate();
	void OnDeviceSelectionComplete();
	void ShowDeviceSelectionUI();
	void ShowMembershipMarketplaceUI();
	void ShowContentMarketplaceUI();
	void ShowInviteUI();
	void ShowAchievementsUI();
	void ShowMessagesUI();
	void ShowGamerCardUI();
	void ShowFeedbackUI();
	void DeleteMessage();
	void UnmuteAll();
	void MuteAll();
	void RegisterStatGuid();
	void GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate();
	void AddRegisterHostStatGuidCompleteDelegate();
	void OnRegisterHostStatGuidComplete();
	void RegisterHostStatGuid();
	void GetHostStatGuid();
	void ClearFriendMessageReceivedDelegate();
	void AddFriendMessageReceivedDelegate();
	void OnFriendMessageReceived();
	void GetFriendMessages();
	void ClearJoinFriendGameCompleteDelegate();
	void AddJoinFriendGameCompleteDelegate();
	void OnJoinFriendGameComplete();
	void JoinFriendGame();
	void ClearReceivedGameInviteDelegate();
	void AddReceivedGameInviteDelegate();
	void OnReceivedGameInvite();
	void SendGameInviteToFriends();
	void SendGameInviteToFriend();
	void SendMessageToFriend();
	void ClearFriendInviteReceivedDelegate();
	void AddFriendInviteReceivedDelegate();
	void OnFriendInviteReceived();
	void DenyFriendInvite();
	void AcceptFriendInvite();
	void RemoveFriend();
	void ClearAddFriendByNameCompleteDelegate();
	void AddAddFriendByNameCompleteDelegate();
	void OnAddFriendByNameComplete();
	void AddFriendByName();
	void AddFriend();
	void GetKeyboardInputResults();
	void ClearKeyboardInputDoneDelegate();
	void AddKeyboardInputDoneDelegate();
	void OnKeyboardInputComplete();
	void ShowKeyboardUI();
	void SetOnlineStatus();
	void GetLocalAccountNames();
	void DeleteLocalAccount();
	void RenameLocalAccount();
	void CreateLocalAccount();
	void ClearCreateOnlineAccountCompletedDelegate();
	void AddCreateOnlineAccountCompletedDelegate();
	void OnCreateOnlineAccountCompleted();
	void CreateOnlineAccount();
	void GetTitleFileState();
	void GetTitleFileContents();
	void ClearReadTitleFileCompleteDelegate();
	void AddReadTitleFileCompleteDelegate();
	void ReadTitleFile();
	void OnReadTitleFileComplete();
	void ClearStorageDeviceChangeDelegate();
	void AddStorageDeviceChangeDelegate();
	void OnStorageDeviceChange();
	void GetNATType();
	void ClearConnectionStatusChangeDelegate();
	void AddConnectionStatusChangeDelegate();
	void OnConnectionStatusChange();
	void IsControllerConnected();
	void ClearControllerChangeDelegate();
	void AddControllerChangeDelegate();
	void OnControllerChange();
	void SetNetworkNotificationPosition();
	void GetNetworkNotificationPosition();
	void ClearExternalUIChangeDelegate();
	void AddExternalUIChangeDelegate();
	void OnExternalUIChange();
	void ClearLinkStatusChangeDelegate();
	void AddLinkStatusChangeDelegate();
	void OnLinkStatusChange();
	void HasLinkConnection();
	void GetPlayerUniqueNetIdFromIndex();
	void GetPlayerNicknameFromIndex();
	void WriteOnlinePlayerScores();
	void ClearFlushOnlineStatsCompleteDelegate();
	void AddFlushOnlineStatsCompleteDelegate();
	void OnFlushOnlineStatsComplete();
	void FlushOnlineStats();
	void WriteOnlineStats();
	void FreeStats();
	void ClearReadOnlineStatsCompleteDelegate();
	void AddReadOnlineStatsCompleteDelegate();
	void OnReadOnlineStatsComplete();
	void ReadOnlineStatsByRankAroundPlayer();
	void ReadOnlineStatsByRank();
	void ReadOnlineStatsForFriends();
	void ReadOnlineStats();
	void SetSpeechRecognitionObject();
	void SelectVocabulary();
	void ClearRecognitionCompleteDelegate();
	void AddRecognitionCompleteDelegate();
	void OnRecognitionComplete();
	void GetRecognitionResults();
	void StopSpeechRecognition();
	void StartSpeechRecognition();
	void StopNetworkedVoice();
	void StartNetworkedVoice();
	void ClearPlayerTalkingDelegates();
	void ClearPlayerStoppedTalkingDelegate();
	void ClearPlayerStartedTalkingDelegate();
	void AddPlayerStoppedTalkingDelegate();
	void AddPlayerStartedTalkingDelegate();
	void OnPlayerStopTalking();
	void OnPlayerBeginTalking();
	void UnmuteRemoteTalker();
	void MuteRemoteTalker();
	void SetRemoteTalkerPriority();
	void IsHeadsetPresent();
	void IsRemotePlayerTalking();
	void IsLocalPlayerTalking();
	void UnregisterRemoteTalker();
	void RegisterRemoteTalker();
	void UnregisterLocalTalker();
	void RegisterLocalTalker();
	void GetFriendsList();
	void ClearReadFriendsCompleteDelegate();
	void AddReadFriendsCompleteDelegate();
	void OnReadFriendsComplete();
	void ReadFriendsList();
	void ClearWritePlayerStorageCompleteDelegate();
	void AddWritePlayerStorageCompleteDelegate();
	void OnWritePlayerStorageComplete();
	void WritePlayerStorage();
	void GetPlayerStorage();
	void ClearReadPlayerStorageForNetIdCompleteDelegate();
	void AddReadPlayerStorageForNetIdCompleteDelegate();
	void OnReadPlayerStorageForNetIdComplete();
	void ReadPlayerStorageForNetId();
	void ClearReadPlayerStorageCompleteDelegate();
	void AddReadPlayerStorageCompleteDelegate();
	void OnReadPlayerStorageComplete();
	void ReadPlayerStorage();
	void ClearWriteProfileSettingsCompleteDelegate();
	void AddWriteProfileSettingsCompleteDelegate();
	void OnWriteProfileSettingsComplete();
	void WriteProfileSettings();
	void GetProfileSettings();
	void ClearReadProfileSettingsCompleteDelegate();
	void AddReadProfileSettingsCompleteDelegate();
	void OnReadProfileSettingsComplete();
	void ReadProfileSettings();
	void ClearFriendsChangeDelegate();
	void AddFriendsChangeDelegate();
	void ClearMutingChangeDelegate();
	void AddMutingChangeDelegate();
	void ClearLoginCancelledDelegate();
	void AddLoginCancelledDelegate();
	void ClearLoginStatusChangeDelegate();
	void AddLoginStatusChangeDelegate();
	void OnLoginStatusChange();
	void ClearLoginChangeDelegate();
	void AddLoginChangeDelegate();
	void IsMuted();
	void AreAnyFriends();
	void IsFriend();
	void CanShowPresenceInformation();
	void CanViewPlayerProfiles();
	void CanPurchaseContent();
	void CanDownloadUserContent();
	void CanCommunicate();
	void CanPlayOnline();
	void GetPlayerNickname();
	void GetUniquePlayerId();
	void IsLocalLogin();
	void IsGuestLogin();
	void GetLoginStatus();
	void ClearLogoutCompletedDelegate();
	void AddLogoutCompletedDelegate();
	void OnLogoutCompleted();
	void Logout();
	void ClearLoginFailedDelegate();
	void AddLoginFailedDelegate();
	void OnLoginFailed();
	void AutoLogin();
	void Login();
	void ShowLoginUI();
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange();
	void Init();
};


// Class OnlineSubsystemSteamworks.SteamworksNetConnection
// 0x0030 (0x5008 - 0x4FD8)
class USteamworksNetConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x4FD8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.SteamworksNetConnection");
		return ptr;
	}

};


// Class OnlineSubsystemSteamworks.SteamWorksNetDriver
// 0x0008 (0x0178 - 0x0170)
class USteamWorksNetDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0170(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.SteamWorksNetDriver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
