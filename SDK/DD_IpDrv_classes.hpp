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

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (0x0048 - 0x003C)
class UClientBeaconAddressResolver : public UObject
{
public:
	int                                                BeaconPort;                                               // 0x003C(0x0004)
	struct FName                                       BeaconName;                                               // 0x0040(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.ClientBeaconAddressResolver");
		return ptr;
	}

};


// Class IpDrv.HTTPDownload
// 0x00FC (0x0B6C - 0x0A70)
class UHTTPDownload : public UDownload
{
public:
	struct FString                                     ProxyServerHost;                                          // 0x0A70(0x000C)
	int                                                ProxyServerPort;                                          // 0x0A7C(0x0004)
	unsigned long                                      MaxRedirection : 1;                                       // 0x0A80(0x0004)
	float                                              ConnectionTimeout;                                        // 0x0A84(0x0004)
	unsigned char                                      UnknownData00[0xE4];                                      // 0x0A88(0x00E4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.HTTPDownload");
		return ptr;
	}

};


// Class IpDrv.InternetLink
// 0x0018 (0x0234 - 0x021C)
class AInternetLink : public AInfo
{
public:
	TEnumAsByte<ELinkMode>                             LinkMode;                                                 // 0x021C(0x0001)
	TEnumAsByte<ELineMode>                             InLineMode;                                               // 0x021D(0x0001)
	TEnumAsByte<ELineMode>                             OutLineMode;                                              // 0x021E(0x0001)
	TEnumAsByte<EReceiveMode>                          ReceiveMode;                                              // 0x021F(0x0001)
	struct FPointer                                    Socket;                                                   // 0x0220(0x0004)
	int                                                Port;                                                     // 0x0224(0x0004)
	struct FPointer                                    RemoteSocket;                                             // 0x0228(0x0004)
	struct FPointer                                    PrivateResolveInfo;                                       // 0x022C(0x0004)
	int                                                DataPending;                                              // 0x0230(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.InternetLink");
		return ptr;
	}


	void ResolveFailed();
	void Resolved();
	void GetLocalIP();
	void StringToIpAddr();
	void IpAddrToString();
	void GetLastError();
	void Resolve();
	void ParseURL();
	void IsDataPending();
};


// Class IpDrv.TcpLink
// 0x0028 (0x025C - 0x0234)
class ATcpLink : public AInternetLink
{
public:
	TEnumAsByte<ELinkState>                            LinkState;                                                // 0x0234(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0235(0x0003) MISSED OFFSET
	struct FIpAddr                                     RemoteAddr;                                               // 0x0238(0x0008)
	class UClass*                                      AcceptClass;                                              // 0x0240(0x0004)
	TArray<unsigned char>                              SendFIFO;                                                 // 0x0244(0x000C)
	struct FString                                     RecvBuf;                                                  // 0x0250(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpLink");
		return ptr;
	}


	void ReceivedBinary();
	void ReceivedLine();
	void ReceivedText();
	void Closed();
	void Opened();
	void Accepted();
	void ReadBinary();
	void ReadText();
	void SendBinary();
	void SendText();
	void IsConnected();
	void Close();
	void Open();
	void Listen();
	void BindPort();
};


// Class IpDrv.MCPBase
// 0x0004 (0x0040 - 0x003C)
class UMCPBase : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MCPBase");
		return ptr;
	}

};


// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0028 (0x0068 - 0x0040)
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FEventUploadConfig>                  EventUploadConfigs;                                       // 0x0040(0x000C)
	TArray<struct FPointer>                            HttpPostObjects;                                          // 0x004C(0x000C)
	TArray<TEnumAsByte<EEventUploadType>>              DisabledUploadTypes;                                      // 0x0058(0x000C)
	unsigned long                                      bBinaryStats : 1;                                         // 0x0064(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineEventsInterfaceMcp");
		return ptr;
	}


	void UploadHardwareData();
	void UploadGameplayEventsData();
	void UploadProfileData();
};


// Class IpDrv.OnlineNewsInterfaceMcp
// 0x0028 (0x0068 - 0x0040)
class UOnlineNewsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FNewsCacheEntry>                     NewsItems;                                                // 0x0040(0x000C)
	TArray<struct FScriptDelegate>                     ReadNewsDelegates;                                        // 0x004C(0x000C)
	unsigned long                                      bNeedsTicking : 1;                                        // 0x0058(0x0004)
	struct FScriptDelegate                             __OnReadNewsCompleted__Delegate;                          // 0x005C(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineNewsInterfaceMcp");
		return ptr;
	}


	void GetNews();
	void ClearReadNewsCompletedDelegate();
	void AddReadNewsCompletedDelegate();
	void OnReadNewsCompleted();
	void ReadNews();
};


// Class IpDrv.OnlineTitleFileDownloadMcp
// 0x003C (0x007C - 0x0040)
class UOnlineTitleFileDownloadMcp : public UMCPBase
{
public:
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                           // 0x0040(0x000C)
	TArray<struct FTitleFile>                          TitleFiles;                                               // 0x004C(0x000C)
	struct FPointer                                    HttpDownloader;                                           // 0x0058(0x0004)
	int                                                CurrentIndex;                                             // 0x005C(0x0004)
	struct FString                                     BaseUrl;                                                  // 0x0060(0x000C)
	float                                              TimeOut;                                                  // 0x006C(0x0004)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;                      // 0x0070(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadMcp");
		return ptr;
	}


	void ClearDownloadedFiles();
	void GetTitleFileState();
	void GetTitleFileContents();
	void ClearReadTitleFileCompleteDelegate();
	void AddReadTitleFileCompleteDelegate();
	void ReadTitleFile();
	void OnReadTitleFileComplete();
};


// Class IpDrv.MeshBeacon
// 0x003C (0x0078 - 0x003C)
class UMeshBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004)
	int                                                MeshBeaconPort;                                           // 0x0040(0x0004)
	struct FPointer                                    Socket;                                                   // 0x0044(0x0004)
	unsigned long                                      bIsInTick : 1;                                            // 0x0048(0x0004)
	unsigned long                                      bWantsDeferredDestroy : 1;                                // 0x0048(0x0004)
	unsigned long                                      bShouldTick : 1;                                          // 0x0048(0x0004)
	float                                              HeartbeatTimeout;                                         // 0x004C(0x0004)
	float                                              ElapsedHeartbeatTime;                                     // 0x0050(0x0004)
	struct FName                                       BeaconName;                                               // 0x0054(0x0008)
	int                                                SocketSendBufferSize;                                     // 0x005C(0x0004)
	int                                                SocketReceiveBufferSize;                                  // 0x0060(0x0004)
	int                                                MaxBandwidthTestBufferSize;                               // 0x0064(0x0004)
	int                                                MinBandwidthTestBufferSize;                               // 0x0068(0x0004)
	float                                              MaxBandwidthTestSendTime;                                 // 0x006C(0x0004)
	float                                              MaxBandwidthTestReceiveTime;                              // 0x0070(0x0004)
	int                                                MaxBandwidthHistoryEntries;                               // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MeshBeacon");
		return ptr;
	}


	void DestroyBeacon();
};


// Class IpDrv.MeshBeaconClient
// 0x00A4 (0x011C - 0x0078)
class UMeshBeaconClient : public UMeshBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                                       // 0x0078(0x000C)
	struct FClientConnectionRequest                    ClientPendingRequest;                                     // 0x0084(0x0024)
	struct FClientBandwidthTestData                    CurrentBandwidthTest;                                     // 0x00A8(0x0014)
	TEnumAsByte<EMeshBeaconClientState>                ClientBeaconState;                                        // 0x00BC(0x0001)
	TEnumAsByte<EMeshBeaconPacketType>                 ClientBeaconRequestType;                                  // 0x00BD(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET
	float                                              ConnectionRequestTimeout;                                 // 0x00C0(0x0004)
	float                                              ConnectionRequestElapsedTime;                             // 0x00C4(0x0004)
	struct FString                                     ResolverClassName;                                        // 0x00C8(0x000C)
	class UClass*                                      ResolverClass;                                            // 0x00D4(0x0004)
	class UClientBeaconAddressResolver*                Resolver;                                                 // 0x00D8(0x0004)
	unsigned long                                      bUsingRegisteredAddr : 1;                                 // 0x00DC(0x0004)
	struct FScriptDelegate                             __OnConnectionRequestResult__Delegate;                    // 0x00E0(0x000C)
	struct FScriptDelegate                             __OnReceivedBandwidthTestRequest__Delegate;               // 0x00EC(0x000C)
	struct FScriptDelegate                             __OnReceivedBandwidthTestResults__Delegate;               // 0x00F8(0x000C)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;                      // 0x0104(0x000C)
	struct FScriptDelegate                             __OnCreateNewSessionRequestReceived__Delegate;            // 0x0110(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MeshBeaconClient");
		return ptr;
	}


	void SendHostNewGameSessionResponse();
	void OnCreateNewSessionRequestReceived();
	void OnTravelRequestReceived();
	void OnReceivedBandwidthTestResults();
	void OnReceivedBandwidthTestRequest();
	void OnConnectionRequestResult();
	void BeginBandwidthTest();
	void RequestConnection();
	void DestroyBeacon();
};


// Class IpDrv.MeshBeaconHost
// 0x0064 (0x00DC - 0x0078)
class UMeshBeaconHost : public UMeshBeacon
{
public:
	TArray<struct FClientMeshBeaconConnection>         ClientConnections;                                        // 0x0078(0x000C)
	TArray<struct FUniqueNetId>                        PendingPlayerConnections;                                 // 0x0084(0x000C)
	struct FUniqueNetId                                OwningPlayerId;                                           // 0x0090(0x0008)
	unsigned long                                      bAllowBandwidthTesting : 1;                               // 0x0098(0x0004)
	int                                                ConnectionBacklog;                                        // 0x009C(0x0004)
	struct FScriptDelegate                             __OnReceivedClientConnectionRequest__Delegate;            // 0x00A0(0x000C)
	struct FScriptDelegate                             __OnStartedBandwidthTest__Delegate;                       // 0x00AC(0x000C)
	struct FScriptDelegate                             __OnFinishedBandwidthTest__Delegate;                      // 0x00B8(0x000C)
	struct FScriptDelegate                             __OnAllPendingPlayersConnected__Delegate;                 // 0x00C4(0x000C)
	struct FScriptDelegate                             __OnReceivedClientCreateNewSessionResult__Delegate;       // 0x00D0(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MeshBeaconHost");
		return ptr;
	}


	void OnReceivedClientCreateNewSessionResult();
	void RequestClientCreateNewSession();
	void TellClientsToTravel();
	void OnAllPendingPlayersConnected();
	void AllPlayersConnected();
	void GetConnectionIndexForPlayer();
	void SetPendingPlayerConnections();
	void OnFinishedBandwidthTest();
	void OnStartedBandwidthTest();
	void OnReceivedClientConnectionRequest();
	void AllowBandwidthTesting();
	void CancelPendingBandwidthTests();
	void HasPendingBandwidthTest();
	void CancelInProgressBandwidthTests();
	void HasInProgressBandwidthTest();
	void RequestClientBandwidthTest();
	void DestroyBeacon();
	void InitHostBeacon();
};


// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0014 (0x00F0 - 0x00DC)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                              // 0x00DC(0x0004)
	int                                                MaxLocalTalkers;                                          // 0x00E0(0x0004)
	int                                                MaxRemoteTalkers;                                         // 0x00E4(0x0004)
	unsigned long                                      bIsUsingSpeechRecognition : 1;                            // 0x00E8(0x0004)
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                                        // 0x00EC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineSubsystemCommonImpl");
		return ptr;
	}


	void IsPlayerInSession();
	void GetPlayerUniqueNetIdFromIndex();
	void GetPlayerNicknameFromIndex();
};


// Class IpDrv.OnlineGameInterfaceImpl
// 0x0124 (0x0160 - 0x003C)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                          // 0x003C(0x0004)
	class UOnlineGameSettings*                         GameSettings;                                             // 0x0040(0x0004)
	class UOnlineGameSearch*                           GameSearch;                                               // 0x0044(0x0004)
	TEnumAsByte<EOnlineGameState>                      CurrentGameState;                                         // 0x0048(0x0001)
	TEnumAsByte<ELanBeaconState>                       LanBeaconState;                                           // 0x0049(0x0001)
	unsigned char                                      LanNonce[0x8];                                            // 0x004A(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	TArray<struct FScriptDelegate>                     CreateOnlineGameCompleteDelegates;                        // 0x0054(0x000C)
	TArray<struct FScriptDelegate>                     UpdateOnlineGameCompleteDelegates;                        // 0x0060(0x000C)
	TArray<struct FScriptDelegate>                     DestroyOnlineGameCompleteDelegates;                       // 0x006C(0x000C)
	TArray<struct FScriptDelegate>                     JoinOnlineGameCompleteDelegates;                          // 0x0078(0x000C)
	TArray<struct FScriptDelegate>                     StartOnlineGameCompleteDelegates;                         // 0x0084(0x000C)
	TArray<struct FScriptDelegate>                     EndOnlineGameCompleteDelegates;                           // 0x0090(0x000C)
	TArray<struct FScriptDelegate>                     FindOnlineGamesCompleteDelegates;                         // 0x009C(0x000C)
	TArray<struct FScriptDelegate>                     CancelFindOnlineGamesCompleteDelegates;                   // 0x00A8(0x000C)
	int                                                LanAnnouncePort;                                          // 0x00B4(0x0004)
	int                                                LanGameUniqueId;                                          // 0x00B8(0x0004)
	int                                                LanPacketPlatformMask;                                    // 0x00BC(0x0004)
	float                                              LanQueryTimeLeft;                                         // 0x00C0(0x0004)
	float                                              LanQueryTimeout;                                          // 0x00C4(0x0004)
	struct FPointer                                    LanBeacon;                                                // 0x00C8(0x0004)
	struct FPointer                                    SessionInfo;                                              // 0x00CC(0x0004)
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;                    // 0x00D0(0x000C)
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;                   // 0x00DC(0x000C)
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;                   // 0x00E8(0x000C)
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;                  // 0x00F4(0x000C)
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;              // 0x0100(0x000C)
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;                     // 0x010C(0x000C)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;                     // 0x0118(0x000C)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;                   // 0x0124(0x000C)
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;                    // 0x0130(0x000C)
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;                      // 0x013C(0x000C)
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;            // 0x0148(0x000C)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                         // 0x0154(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineGameInterfaceImpl");
		return ptr;
	}


	void CancelPendingAsyncTasks();
	void BindPlatformSpecificSessionToSearch();
	void ReadPlatformSpecificSessionInfoBySessionName();
	void ReadPlatformSpecificSessionInfo();
	void QueryNonAdvertisedData();
	void RecalculateSkillRating();
	void AcceptGameInvite();
	void ClearGameInviteAcceptedDelegate();
	void AddGameInviteAcceptedDelegate();
	void OnGameInviteAccepted();
	void GetArbitratedPlayers();
	void ClearArbitrationRegistrationCompleteDelegate();
	void AddArbitrationRegistrationCompleteDelegate();
	void OnArbitrationRegistrationComplete();
	void RegisterForArbitration();
	void ClearEndOnlineGameCompleteDelegate();
	void AddEndOnlineGameCompleteDelegate();
	void OnEndOnlineGameComplete();
	void EndOnlineGame();
	void ClearStartOnlineGameCompleteDelegate();
	void AddStartOnlineGameCompleteDelegate();
	void OnStartOnlineGameComplete();
	void StartOnlineGame();
	void ClearUnregisterPlayerCompleteDelegate();
	void AddUnregisterPlayerCompleteDelegate();
	void OnUnregisterPlayerComplete();
	void UnregisterPlayer();
	void ClearRegisterPlayerCompleteDelegate();
	void AddRegisterPlayerCompleteDelegate();
	void OnRegisterPlayerComplete();
	void RegisterPlayer();
	void GetResolvedConnectString();
	void ClearJoinOnlineGameCompleteDelegate();
	void AddJoinOnlineGameCompleteDelegate();
	void OnJoinOnlineGameComplete();
	void JoinOnlineGame();
	void FreeSearchResults();
	void ClearCancelFindOnlineGamesCompleteDelegate();
	void AddCancelFindOnlineGamesCompleteDelegate();
	void OnCancelFindOnlineGamesComplete();
	void CancelFindOnlineGames();
	void ClearFindOnlineGamesCompleteDelegate();
	void AddFindOnlineGamesCompleteDelegate();
	void FindOnlineGames();
	void ClearDestroyOnlineGameCompleteDelegate();
	void AddDestroyOnlineGameCompleteDelegate();
	void OnDestroyOnlineGameComplete();
	void DestroyOnlineGame();
	void ClearUpdateOnlineGameCompleteDelegate();
	void AddUpdateOnlineGameCompleteDelegate();
	void OnUpdateOnlineGameComplete();
	void UpdateOnlineGame();
	void ClearCreateOnlineGameCompleteDelegate();
	void AddCreateOnlineGameCompleteDelegate();
	void OnCreateOnlineGameComplete();
	void CreateOnlineGameFailureID();
	void CreateOnlineGame();
	void GetGameSearch();
	void GetGameSettings();
	void OnFindOnlineGamesComplete();
};


// Class IpDrv.PartyBeacon
// 0x0020 (0x005C - 0x003C)
class UPartyBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004)
	int                                                PartyBeaconPort;                                          // 0x0040(0x0004)
	struct FPointer                                    Socket;                                                   // 0x0044(0x0004)
	unsigned long                                      bIsInTick : 1;                                            // 0x0048(0x0004)
	unsigned long                                      bWantsDeferredDestroy : 1;                                // 0x0048(0x0004)
	unsigned long                                      bShouldTick : 1;                                          // 0x0048(0x0004)
	float                                              HeartbeatTimeout;                                         // 0x004C(0x0004)
	float                                              ElapsedHeartbeatTime;                                     // 0x0050(0x0004)
	struct FName                                       BeaconName;                                               // 0x0054(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.PartyBeacon");
		return ptr;
	}


	void DestroyBeacon();
};


// Class IpDrv.PartyBeaconClient
// 0x008C (0x00E8 - 0x005C)
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                                       // 0x005C(0x000C)
	struct FPartyReservation                           PendingRequest;                                           // 0x0068(0x0018)
	TEnumAsByte<EPartyBeaconClientState>               ClientBeaconState;                                        // 0x0080(0x0001)
	TEnumAsByte<EPartyBeaconClientRequest>             ClientBeaconRequestType;                                  // 0x0081(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	float                                              ReservationRequestTimeout;                                // 0x0084(0x0004)
	float                                              ReservationRequestElapsedTime;                            // 0x0088(0x0004)
	struct FString                                     ResolverClassName;                                        // 0x008C(0x000C)
	class UClass*                                      ResolverClass;                                            // 0x0098(0x0004)
	class UClientBeaconAddressResolver*                Resolver;                                                 // 0x009C(0x0004)
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;                 // 0x00A0(0x000C)
	struct FScriptDelegate                             __OnReservationUpdateRequestComplete__Delegate;           // 0x00AC(0x000C)
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;                    // 0x00B8(0x000C)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;                      // 0x00C4(0x000C)
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                                // 0x00D0(0x000C)
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                           // 0x00DC(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.PartyBeaconClient");
		return ptr;
	}


	void DestroyBeacon();
	void CancelReservation();
	void RequestReservationUpdate();
	void RequestReservation();
	void OnHostHasCancelled();
	void OnHostIsReady();
	void OnTravelRequestReceived();
	void OnReservationCountUpdated();
	void OnReservationUpdateRequestComplete();
	void OnReservationRequestComplete();
};


// Class IpDrv.PartyBeaconHost
// 0x0060 (0x00BC - 0x005C)
class UPartyBeaconHost : public UPartyBeacon
{
public:
	TArray<struct FClientBeaconConnection>             Clients;                                                  // 0x005C(0x000C)
	int                                                NumTeams;                                                 // 0x0068(0x0004)
	int                                                NumPlayersPerTeam;                                        // 0x006C(0x0004)
	int                                                NumReservations;                                          // 0x0070(0x0004)
	int                                                NumConsumedReservations;                                  // 0x0074(0x0004)
	TArray<struct FPartyReservation>                   Reservations;                                             // 0x0078(0x000C)
	struct FName                                       OnlineSessionName;                                        // 0x0084(0x0008)
	int                                                ConnectionBacklog;                                        // 0x008C(0x0004)
	int                                                ReservedHostTeamNum;                                      // 0x0090(0x0004)
	unsigned long                                      bBestFitTeamAssignment : 1;                               // 0x0094(0x0004)
	struct FScriptDelegate                             __OnReservationChange__Delegate;                          // 0x0098(0x000C)
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                           // 0x00A4(0x000C)
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;                 // 0x00B0(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.PartyBeaconHost");
		return ptr;
	}


	void GetMaxAvailableTeamSize();
	void GetPartyLeaders();
	void GetPlayers();
	void AppendReservationSkillsToSearch();
	void UnregisterParty();
	void UnregisterPartyMembers();
	void RegisterPartyMembers();
	void AreReservationsFull();
	void TellClientsHostHasCancelled();
	void TellClientsHostIsReady();
	void TellClientsToTravel();
	void DestroyBeacon();
	void OnClientCancellationReceived();
	void OnReservationsFull();
	void OnReservationChange();
	void HandlePlayerLogout();
	void UpdatePartyReservationEntry();
	void AddPartyReservationEntry();
	void InitHostBeacon();
};


// Class IpDrv.TcpipConnection
// 0x0024 (0x4FFC - 0x4FD8)
class UTcpipConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x4FD8(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpipConnection");
		return ptr;
	}

};


// Class IpDrv.TcpNetDriver
// 0x0024 (0x0194 - 0x0170)
class UTcpNetDriver : public UNetDriver
{
public:
	unsigned long                                      AllowPlayerPortUnreach : 1;                               // 0x0170(0x0004)
	unsigned long                                      UnknownData00 : 31;                                       // 0x0170(0x0001)
	unsigned long                                      LogPortUnreach : 1;                                       // 0x0174(0x0004)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0178(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpNetDriver");
		return ptr;
	}

};


// Class IpDrv.WebRequest
// 0x00BC (0x00F8 - 0x003C)
class UWebRequest : public UObject
{
public:
	struct FString                                     RemoteAddr;                                               // 0x003C(0x000C)
	struct FString                                     URI;                                                      // 0x0048(0x000C)
	struct FString                                     UserName;                                                 // 0x0054(0x000C)
	struct FString                                     Password;                                                 // 0x0060(0x000C)
	int                                                ContentLength;                                            // 0x006C(0x0004)
	struct FString                                     ContentType;                                              // 0x0070(0x000C)
	TEnumAsByte<ERequestType>                          RequestType;                                              // 0x007C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	struct FMap_Mirror                                 HeaderMap;                                                // 0x0080(0x003C)
	struct FMap_Mirror                                 VariableMap;                                              // 0x00BC(0x003C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebRequest");
		return ptr;
	}


	void GetHexDigit();
	void DecodeFormData();
	void ProcessHeaderString();
	void Dump();
	void GetVariables();
	void GetVariableNumber();
	void GetVariableCount();
	void GetVariable();
	void AddVariable();
	void GetHeaders();
	void GetHeader();
	void AddHeader();
	void EncodeBase64();
	void DecodeBase64();
};


// Class IpDrv.WebResponse
// 0x0068 (0x00A4 - 0x003C)
class UWebResponse : public UObject
{
public:
	TArray<struct FString>                             headers;                                                  // 0x003C(0x000C)
	struct FMap_Mirror                                 ReplacementMap;                                           // 0x0048(0x003C)
	struct FString                                     IncludePath;                                              // 0x0084(0x000C)
	struct FString                                     CharSet;                                                  // 0x0090(0x000C)
	class AWebConnection*                              Connection;                                               // 0x009C(0x0004)
	unsigned long                                      bSentText : 1;                                            // 0x00A0(0x0004)
	unsigned long                                      bSentResponse : 1;                                        // 0x00A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebResponse");
		return ptr;
	}


	void SentResponse();
	void SentText();
	void Redirect();
	void SendStandardHeaders();
	void HTTPError();
	void SendHeaders();
	void AddHeader();
	void HTTPHeader();
	void HTTPResponse();
	void FailAuthentication();
	void SendCachedFile();
	void SendBinary();
	void SendText();
	void Dump();
	void GetHTTPExpiration();
	void LoadParsedUHTM();
	void IncludeBinaryFile();
	void IncludeUHTM();
	void ClearSubst();
	void Subst();
	void FileExists();
};


// Class IpDrv.WebApplication
// 0x0014 (0x0050 - 0x003C)
class UWebApplication : public UObject
{
public:
	class AWorldInfo*                                  WorldInfo;                                                // 0x003C(0x0004)
	class AWebServer*                                  WebServer;                                                // 0x0040(0x0004)
	struct FString                                     Path;                                                     // 0x0044(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebApplication");
		return ptr;
	}


	void PostQuery();
	void Query();
	void PreQuery();
	void CleanupApp();
	void Cleanup();
	void Init();
};


// Class IpDrv.WebServer
// 0x014C (0x03A8 - 0x025C)
class AWebServer : public ATcpLink
{
public:
	struct FString                                     ServerName;                                               // 0x025C(0x000C)
	struct FString                                     Applications[0xA];                                        // 0x0268(0x000C)
	struct FString                                     ApplicationPaths[0xA];                                    // 0x02E0(0x000C)
	unsigned long                                      bEnabled : 1;                                             // 0x0358(0x0004)
	int                                                ListenPort;                                               // 0x035C(0x0004)
	int                                                MaxConnections;                                           // 0x0360(0x0004)
	int                                                DefaultApplication;                                       // 0x0364(0x0004)
	int                                                ExpirationSeconds;                                        // 0x0368(0x0004)
	struct FString                                     ServerURL;                                                // 0x036C(0x000C)
	class UWebApplication*                             ApplicationObjects[0xA];                                  // 0x0378(0x0004)
	int                                                ConnectionCount;                                          // 0x03A0(0x0004)
	int                                                ConnId;                                                   // 0x03A4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebServer");
		return ptr;
	}


	void GetApplication();
	void LostChild();
	void GainedChild();
	void Destroyed();
	void PostBeginPlay();
};


// Class IpDrv.HelloWeb
// 0x0000 (0x0050 - 0x0050)
class UHelloWeb : public UWebApplication
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.HelloWeb");
		return ptr;
	}


	void Query();
	void Init();
};


// Class IpDrv.ImageServer
// 0x0000 (0x0050 - 0x0050)
class UImageServer : public UWebApplication
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.ImageServer");
		return ptr;
	}


	void Query();
};


// Class IpDrv.IniLocPatcherMcp
// 0x000C (0x0068 - 0x005C)
class UIniLocPatcherMcp : public UIniLocPatcher
{
public:
	struct FName                                       McpDownloaderName;                                        // 0x005C(0x0008)
	class UOnlineTitleFileDownloadMcp*                 Downloader;                                               // 0x0064(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.IniLocPatcherMcp");
		return ptr;
	}


	void ClearCachedFiles();
	void ClearReadFileDelegate();
	void AddReadFileDelegate();
	void OnReadFileComplete();
	void DownloadFiles();
	void Init();
};


// Class IpDrv.WebConnection
// 0x0030 (0x028C - 0x025C)
class AWebConnection : public ATcpLink
{
public:
	class AWebServer*                                  WebServer;                                                // 0x025C(0x0004)
	struct FString                                     ReceivedData;                                             // 0x0260(0x000C)
	class UWebRequest*                                 Request;                                                  // 0x026C(0x0004)
	class UWebResponse*                                Response;                                                 // 0x0270(0x0004)
	class UWebApplication*                             Application;                                              // 0x0274(0x0004)
	unsigned long                                      bDelayCleanup : 1;                                        // 0x0278(0x0004)
	int                                                RawBytesExpecting;                                        // 0x027C(0x0004)
	int                                                MaxValueLength;                                           // 0x0280(0x0004)
	int                                                MaxLineLength;                                            // 0x0284(0x0004)
	int                                                ConnId;                                                   // 0x0288(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebConnection");
		return ptr;
	}


	void IsHanging();
	void Cleanup();
	void CheckRawBytes();
	void EndOfHeaders();
	void CreateResponseObject();
	void ProcessPost();
	void ProcessGet();
	void ProcessHead();
	void ReceivedLine();
	void ReceivedText();
	void Timer();
	void Closed();
	void Accepted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
