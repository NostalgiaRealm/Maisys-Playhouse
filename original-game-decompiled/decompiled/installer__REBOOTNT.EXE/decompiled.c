/* Ghidra 12.1.4 generated C-like pseudocode for stream_003_00019680.exe.
 * Not original source. Names and types are inferred unless a header says otherwise. Not verified to compile. */

/* ==== entry @ 00401000 ==== 
 * signature: undefined4 __stdcall entry(HMODULE param_1)
 * body: 00401000-0040108e
 */

undefined4 entry(HMODULE param_1)

{
  DWORD DVar1;
  HANDLE ProcessHandle;
  BOOL BVar2;
  HMODULE *TokenHandle;
  CHAR local_118 [260];
  _TOKEN_PRIVILEGES local_14;
  
  DVar1 = GetModuleFileNameA(param_1,local_118,0x104);
  if (DVar1 != 0) {
    MoveFileExA(local_118,(LPCSTR)0x0,5);
  }
  TokenHandle = &param_1;
  DVar1 = 0x28;
  ProcessHandle = GetCurrentProcess();
  BVar2 = OpenProcessToken(ProcessHandle,DVar1,TokenHandle);
  if (BVar2 != 0) {
    LookupPrivilegeValueA((LPCSTR)0x0,s_SeShutdownPrivilege_00403000,&local_14.Privileges[0].Luid);
    local_14.PrivilegeCount = 1;
    local_14.Privileges[0].Attributes = 2;
    BVar2 = AdjustTokenPrivileges(param_1,0,&local_14,0,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
    if (BVar2 != 0) {
      ExitWindowsEx(2,0);
    }
  }
  return 0;
}


