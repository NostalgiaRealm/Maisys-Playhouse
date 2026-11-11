
/* ==== FUN_100155a0 @ 100155a0 ==== 
 * signature: uint __cdecl FUN_100155a0(byte * param_1)
 * body: 100155a0-100157ce
 */

uint __cdecl FUN_100155a0(byte *param_1)

{
  byte *pbVar1;
  LPCSTR pCVar2;
  int iVar3;
  uint uVar4;
  byte *lpString2;
  byte local_c98 [512];
  byte local_a98 [1024];
  byte local_698 [1024];
  CHAR local_298 [512];
  _STARTUPINFOA local_98;
  _PROCESS_INFORMATION local_54;
  SHELLEXECUTEINFOA local_44;
  int local_8;
  
  if ((*param_1 & 1) == 0) {
    local_8 = ((*param_1 & 4) != 0) + 1;
  }
  else {
    local_8 = 3;
  }
  FUN_10009eff(local_698,param_1 + 1);
  pbVar1 = (byte *)FUN_1000bc0e((char *)(param_1 + 1));
  lpString2 = local_c98;
  FUN_10009eff(local_c98,pbVar1);
  local_a98[0] = 0;
  if (local_698[0] == 0) {
    lstrcpyA((LPSTR)local_698,(LPCSTR)local_c98);
    lpString2 = (byte *)0x0;
  }
  pbVar1 = (byte *)FUN_1000bc0e((char *)pbVar1);
  if (*pbVar1 != 0) {
    FUN_10009eff(local_a98,pbVar1);
    FUN_10012386((LPCSTR)local_a98,0);
  }
  if (local_698[0] != 0) {
    pCVar2 = FUN_100147fa((LPCSTR)local_698,0x5c);
    if (pCVar2 != (LPCSTR)0x0) {
      FUN_10012386((LPCSTR)local_698,0);
    }
  }
  if (local_a98[0] != 0) {
    FUN_10016240((LPCSTR)local_a98);
  }
  local_44.hwnd = DAT_100238d8;
  local_44.lpFile = (LPCSTR)local_698;
  local_44.lpDirectory = (LPCSTR)local_a98;
  local_44.cbSize = 0x3c;
  local_44.fMask = 0x40;
  local_44.lpVerb = (LPCSTR)0x0;
  local_44.nShow = local_8;
  local_44.lpParameters = (LPCSTR)lpString2;
  if (DAT_10023930 == 0) {
    _memset(&local_98,0,0x44);
    local_98.wShowWindow = (WORD)local_8;
    local_98.cb = 0x44;
    local_98.dwFlags = 1;
    wsprintfA(local_298,&DAT_1001fec0,local_698);
    if (lpString2 != (byte *)0x0) {
      lstrcatA(local_298,&DAT_1001f288);
      lstrcatA(local_298,(LPCSTR)lpString2);
    }
    iVar3 = CreateProcessA((LPCSTR)0x0,local_298,(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,
                           (LPCSTR)(-(uint)(local_a98[0] != 0) & (uint)local_a98),&local_98,
                           &local_54);
    local_44.hProcess = local_54.hProcess;
  }
  else {
    iVar3 = ShellExecuteExA(&local_44);
  }
  if (iVar3 == 0) {
    wsprintfA(local_298,*(LPCSTR *)(DAT_100240b8 + 0x14),local_698);
    FUN_1000b352(local_298);
    uVar4 = -(uint)(DAT_10023e9c != '\x01') & 0xfffffffe;
  }
  else {
    if ((*param_1 & 2) != 0) {
      FUN_1000ba4c(local_44.hProcess);
    }
    uVar4 = 0;
  }
  return uVar4;
}


