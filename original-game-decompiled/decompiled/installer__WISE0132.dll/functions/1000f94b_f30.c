
/* ==== f30 @ 1000f94b ==== 
 * signature: undefined4 __stdcall f30(uint param_1)
 * body: 1000f94b-1000fb55
 */

undefined4 f30(uint param_1)

{
  uint uVar1;
  char *pcVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  int iVar4;
  CHAR local_608 [512];
  byte local_408 [256];
  CHAR local_308 [256];
  byte local_208 [256];
  byte local_108 [256];
  undefined4 local_8;
  
                    /* 0xf94b  35  f30 */
  uVar1 = param_1;
  local_8 = 0;
  pcVar2 = FUN_10010950((char *)local_108,*(char **)(param_1 + 0x20));
  param_1 = FUN_10016230(local_108);
  if ((param_1 & 0x40) != 0) {
    param_1 = param_1 & 0xffffffbf | 0x200;
  }
  pcVar2 = FUN_10010950((char *)local_408,pcVar2);
  pcVar2 = FUN_10010950((char *)local_108,pcVar2);
  FUN_10010950((char *)local_208,pcVar2);
  if ((local_208[0] != 0x30) && (local_208[0] != 0)) {
    param_1 = FUN_10016190(local_208);
  }
  if ((((param_1 & 0x3fffff7f) == 0) || (*(char *)(uVar1 + 0x18) == '\x01')) || (DAT_100241e8 == 0))
  {
    local_8 = 0;
  }
  else {
    FUN_10009eff(local_408,local_408);
    FUN_10009eff(local_108,local_108);
    lstrcpyA(local_308,(LPCSTR)local_108);
    FUN_10010cf9(local_308);
    FUN_100162e0((char *)local_208,0x100);
    FUN_10016240(local_308);
    hModule = LoadLibraryExA((LPCSTR)local_108,(HANDLE)0x0,0);
    if (hModule == (HMODULE)0x0) {
      wsprintfA(local_608,*(LPCSTR *)(DAT_100240b8 + 0x18),local_108);
      FUN_1000b352(local_608);
      local_8 = 1;
    }
    else {
      iVar4 = 0;
      pFVar3 = GetProcAddress(hModule,s_DirectXSetup_1001fcb0);
      if ((pFVar3 == (FARPROC)0x0) &&
         (pFVar3 = GetProcAddress(hModule,s_DirectXSetupA_1001fca0), pFVar3 == (FARPROC)0x0)) {
        iVar4 = -999;
      }
      if (iVar4 == 0) {
        iVar4 = (*pFVar3)(DAT_100238d8,local_408,param_1);
      }
      if (iVar4 < 0) {
        wsprintfA(local_308,s_DirectX__Could_not_install__erro_1001fc78,iVar4);
        FUN_10002639(local_308);
      }
      else if (iVar4 == 1) {
        FUN_100105d2(s_RESTART_1001fa74,&DAT_1001fa7c);
      }
      FreeLibrary(hModule);
    }
    FUN_10016240((LPCSTR)local_208);
  }
  return local_8;
}


