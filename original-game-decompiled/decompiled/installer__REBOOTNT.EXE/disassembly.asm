; Ghidra listing for stream_003_00019680.exe (x86:LE:32:default). Labels and types are tool-generated unless they came from the binary.
00400000  IMAGE_DOS_HEADER 
00400080  IMAGE_RICH_HEADER 
; undefined 8 bytes at 004000a8
004000b0  IMAGE_NT_HEADERS32 
004001a8  IMAGE_SECTION_HEADER 
004001d0  IMAGE_SECTION_HEADER 
004001f8  IMAGE_SECTION_HEADER 
; undefined 480 bytes at 00400220

; ==== FUNCTION entry entry=00401000 sig=undefined4 __stdcall entry(HMODULE param_1)
00401000  55                   PUSH EBP
00401001  8bec                 MOV EBP,ESP
00401003  81ec14010000         SUB ESP,0x114
00401009  56                   PUSH ESI
0040100a  8d85ecfeffff         LEA EAX,[EBP + 0xfffffeec]
00401010  6804010000           PUSH 0x104
00401015  50                   PUSH EAX
00401016  ff7508               PUSH dword ptr [EBP + 0x8]
00401019  ff1514204000         CALL dword ptr [0x00402014]
0040101f  33f6                 XOR ESI,ESI
00401021  85c0                 TEST EAX,EAX
00401023  7410                 JZ 0x00401035
00401025  6a05                 PUSH 0x5
00401027  8d85ecfeffff         LEA EAX,[EBP + 0xfffffeec]
0040102d  56                   PUSH ESI
0040102e  50                   PUSH EAX
0040102f  ff1518204000         CALL dword ptr [0x00402018]
00401035  8d4508               LEA EAX,[EBP + 0x8]
00401038  50                   PUSH EAX
00401039  6a28                 PUSH 0x28
0040103b  ff1510204000         CALL dword ptr [0x00402010]
00401041  50                   PUSH EAX
00401042  ff1508204000         CALL dword ptr [0x00402008]
00401048  85c0                 TEST EAX,EAX
0040104a  743c                 JZ 0x00401088
0040104c  8d45f4               LEA EAX,[EBP + -0xc]
0040104f  50                   PUSH EAX
00401050  6800304000           PUSH 0x403000
00401055  56                   PUSH ESI
00401056  ff1500204000         CALL dword ptr [0x00402000]
0040105c  56                   PUSH ESI
0040105d  56                   PUSH ESI
0040105e  8d45f0               LEA EAX,[EBP + -0x10]
00401061  56                   PUSH ESI
00401062  50                   PUSH EAX
00401063  56                   PUSH ESI
00401064  ff7508               PUSH dword ptr [EBP + 0x8]
00401067  c745f001000000       MOV dword ptr [EBP + -0x10],0x1
0040106e  c745fc02000000       MOV dword ptr [EBP + -0x4],0x2
00401075  ff1504204000         CALL dword ptr [0x00402004]
0040107b  85c0                 TEST EAX,EAX
0040107d  7409                 JZ 0x00401088
0040107f  56                   PUSH ESI
00401080  6a02                 PUSH 0x2
00401082  ff1520204000         CALL dword ptr [0x00402020]
00401088  33c0                 XOR EAX,EAX
0040108a  5e                   POP ESI
0040108b  c9                   LEAVE
0040108c  c21000               RET 0x10
; undefined 369 bytes at 0040108f
00402000  addr 0000211a
00402004  addr 00002102
00402008  addr 00002132
; undefined 4 bytes at 0040200c
00402010  addr 000020a0
00402014  addr 000020c2
00402018  addr 000020b4
; undefined 4 bytes at 0040201c
00402020  addr 000020e6
; undefined 4 bytes at 00402024
00402028  ddw 2088h
0040202c  ddw 0h
00402030  ddw 0h
00402034  ddw 20D8h
00402038  ddw 2010h
0040203c  ddw 2098h
00402040  ddw 0h
00402044  ddw 0h
00402048  ddw 20F6h
0040204c  ddw 2020h
00402050  ddw 2078h
00402054  ddw 0h
00402058  ddw 0h
0040205c  ddw 2146h
00402060  ddw 2000h
; undefined 20 bytes at 00402064
00402078  ddw 211Ah
0040207c  ddw 2102h
00402080  ddw 2132h
; undefined 4 bytes at 00402084
00402088  ddw 20A0h
0040208c  ddw 20C2h
00402090  ddw 20B4h
; undefined 4 bytes at 00402094
00402098  ddw 20E6h
; undefined 4 bytes at 0040209c
004020a0  dw D3h
004020a2  ds "GetCurrentProcess"
004020b4  dw 1A7h
004020b6  ds "MoveFileExA"
004020c2  dw FCh
004020c4  ds "GetModuleFileNameA"
; undefined 1 bytes at 004020d7
004020d8  ds "KERNEL32.dll"
; undefined 1 bytes at 004020e5
004020e6  dw CBh
004020e8  ds "ExitWindowsEx"
004020f6  ds "USER32.dll"
; undefined 1 bytes at 00402101
00402102  dw Ah
00402104  ds "AdjustTokenPrivileges"
0040211a  dw BFh
0040211c  ds "LookupPrivilegeValueA"
00402132  dw 104h
00402134  ds "OpenProcessToken"
; undefined 1 bytes at 00402145
00402146  ds "ADVAPI32.dll"
; undefined 13 bytes at 00402153
00402160  IMAGE_DIRECTORY_ENTRY_EXPORT 
00402188  ds "REBOOTNT.EXE"
; undefined 107 bytes at 00402195
00403000  ds "SeShutdownPrivilege"
; undefined 492 bytes at 00403014
ExceptionList:
ffdff000  void * 00000000
StackBase:
ffdff004  void * 00000000
StackLimit:
ffdff008  void * 00000000
SubSystemTib:
ffdff00c  void * 00000000
FiberData:
ffdff010  void * 00000000
ArbitraryUserPointer:
ffdff014  void * 00000000
Self:
ffdff018  void * ffdff000
EnvironmentPointer:
ffdff01c  void * 00000000
ClientId:
ffdff020  CLIENT_ID 
ActiveRpcHandle:
ffdff028  void * 00000000
ThreadLocalStoragePointer:
ffdff02c  void * 00000000
ProcessEnvironmentBlock:
ffdff030  void * 00000000
LastErrorValue:
ffdff034  ddw 0h
CountOfOwnedCriticalSections:
ffdff038  ddw 0h
CsrClientThread:
ffdff03c  void * 00000000
Win32ThreadInfo:
ffdff040  void * 00000000
User32Reserved:
ffdff044  ddw[26] 
UserReserved:
ffdff0ac  ddw[5] 
WOW32Reserved:
ffdff0c0  void * 00000000
CurrentLocale:
ffdff0c4  ddw 0h
FpSoftwareStatusRegister:
ffdff0c8  ddw 0h
SystemReserved1:
ffdff0cc  void *[54] 
ExceptionCode:
ffdff1a4  ddw 0h
ActivationContextStackPointer:
ffdff1a8  void * 00000000
SpareBytes:
ffdff1ac  uchar[36] ""
TxFsContext:
ffdff1d0  ddw 0h
GdiTebBatch:
ffdff1d4  ddw 0h
; undefined 1244 bytes at ffdff1d8
RealClientId:
ffdff6b4  CLIENT_ID 
GdiCachedProcessHandle:
ffdff6bc  void * 00000000
GdiClientPID:
ffdff6c0  ddw 0h
GdiCLientTID:
ffdff6c4  ddw 0h
GdiThreadLocalInfo:
ffdff6c8  void * 00000000
Win32ClientInfo:
ffdff6cc  void *[62] 
glDispatchTable:
ffdff7c4  void *[233] 
glReserved1:
ffdffb68  void *[29] 
glReserved2:
ffdffbdc  void * 00000000
glSectionInfo:
ffdffbe0  void * 00000000
glSection:
ffdffbe4  void * 00000000
glTable:
ffdffbe8  void * 00000000
glCurrentRC:
ffdffbec  void * 00000000
glContext:
ffdffbf0  void * 00000000
LastStatusValue:
ffdffbf4  ddw 0h
; undefined 8 bytes at ffdffbf8
StaticUnicodeBuffer:
ffdffc00  wchar16[261] u""
; undefined 2 bytes at ffdffe0a
DeallocationStack:
ffdffe0c  void * 00000000
TlsSlots:
ffdffe10  void *[64] 
TlsLinks.Flink:
ffdfff10  void * 00000000
TlsLinks.Blink:
ffdfff14  void * 00000000
Vdm:
ffdfff18  void * 00000000
ReservedForNtRpc:
ffdfff1c  void * 00000000
DbgSsReserved:
ffdfff20  void *[2] 
HardErrorMode:
ffdfff28  ddw 0h
Instrumentation:
ffdfff2c  void *[9] 
ActivityId:
ffdfff50  GUID 00000000-0000-0000-0000-000000000000
SubProcessTag:
ffdfff60  void * 00000000
EtwLocalData:
ffdfff64  void * 00000000
EtwTraceData:
ffdfff68  void * 00000000
WinSockData:
ffdfff6c  void * 00000000
GdiBatchCount:
ffdfff70  ddw 0h
IdealProcessorValue:
ffdfff74  ddw 0h
GuaranteedStackBytes:
ffdfff78  ddw 0h
ReservedForPerf:
ffdfff7c  void * 00000000
ReservedForOle:
ffdfff80  void * 00000000
WaitingOnLoaderLock:
ffdfff84  ddw 0h
SavedPriorityState:
ffdfff88  void * 00000000
SoftPatchPtr1:
ffdfff8c  void * 00000000
ThreadPoolData:
ffdfff90  void * 00000000
TlsExpansionSlots:
ffdfff94  void * 00000000
MuiGeneration:
ffdfff98  ddw 0h
IsImpersonating:
ffdfff9c  ddw 0h
NlsCache:
ffdfffa0  void * 00000000
pShimData:
ffdfffa4  void * 00000000
HeapVirtualAffinity:
ffdfffa8  ddw 0h
CurrentTransactionHandle:
ffdfffac  void * 00000000
ActiveFrame:
ffdfffb0  void * 00000000
FlsData:
ffdfffb4  void * 00000000
PreferredLanguages:
ffdfffb8  void * 00000000
UserPrefLanguages:
ffdfffbc  void * 00000000
MergedPrefLanguages:
ffdfffc0  void * 00000000
MuiImpersonation:
ffdfffc4  ddw 0h
CrossTebFlags:
ffdfffc8  ushort 0h
SameTebFlags:
ffdfffca  ushort 0h
TxnScopeEnterCallback:
ffdfffcc  void * 00000000
TxnScopeExitCallback:
ffdfffd0  void * 00000000
TxnScopeContext:
ffdfffd4  void * 00000000
LockCount:
ffdfffd8  ddw 0h
; undefined 4 bytes at ffdfffdc
ResourceRetValue:
ffdfffe0  void * 00000000
; undefined 28 bytes at ffdfffe4
