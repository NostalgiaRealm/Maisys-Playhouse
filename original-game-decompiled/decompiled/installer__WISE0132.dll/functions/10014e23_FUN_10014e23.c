
/* ==== FUN_10014e23 @ 10014e23 ==== 
 * signature: undefined4 __cdecl FUN_10014e23(int * param_1, byte * param_2, HMODULE param_3, undefined * param_4, undefined4 param_5)
 * body: 10014e23-100150f1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_10014e23(int *param_1,byte *param_2,HMODULE param_3,undefined *param_4,undefined4 param_5)

{
  int *piVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  int iVar4;
  HMODULE hLibModule;
  HMODULE pHVar5;
  undefined *puVar6;
  byte local_b0c [1024];
  CHAR local_70c [512];
  byte local_50c [1024];
  CHAR local_10c [256];
  char *local_c;
  char *local_8;
  
  piVar1 = param_1;
  iVar4 = *param_1;
  if ((*(byte *)(iVar4 + 1) & 3) == 3) {
    *(int *)(param_2 + (uint)(byte)param_3->unused * 4) = iVar4;
    *(char *)&param_3->unused = (char)param_3->unused + '\x01';
    iVar4 = *param_1;
    if ((*(byte *)(iVar4 + 1) & 0x10) != 0) {
      *(byte *)(iVar4 + 1) = *(byte *)(iVar4 + 1) ^ 0x30;
      return 0;
    }
  }
  FUN_10009eff(local_50c,(byte *)(iVar4 + 2));
  param_2 = (byte *)FUN_1000bc0e((char *)(*param_1 + 2));
  FUN_10009eff(local_b0c,param_2);
  local_c = FUN_1000bc0e((char *)param_2);
  local_8 = FUN_1000bc0e(local_c);
  iVar4 = *param_1;
  hLibModule = (HMODULE)0x0;
  param_1 = (int *)0x1;
  if ((*(byte *)(iVar4 + 1) & 8) == 0) {
    if (((DAT_100241e8 != 0) && ((*(byte *)(iVar4 + 1) & 0x20) == 0)) &&
       (hLibModule = LoadLibraryExA((LPCSTR)local_50c,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0)) {
      param_1 = (int *)0x2;
    }
    hModule = param_3;
    if ((param_1 != (int *)0x2) &&
       (hModule = LoadLibraryA((LPCSTR)local_50c), hModule != (HMODULE)0x0)) {
      param_1 = (int *)0x2;
    }
  }
  else {
    param_1 = (int *)0x2;
    hModule = DAT_10024178;
  }
  pHVar5 = param_3;
  if (param_1 != (int *)0x2) goto LAB_10014f7e;
  if (hLibModule != (HMODULE)0x0) {
    hModule = hLibModule;
  }
  pFVar3 = GetProcAddress(hModule,(LPCSTR)local_b0c);
  if (pFVar3 == (FARPROC)0x0) {
LAB_10014f64:
    pHVar5 = (HMODULE)0x0;
  }
  else {
    param_1 = (int *)0x0;
    if (((*(byte *)(*piVar1 + 1) & 0x20) != 0) && ((*(byte *)(*piVar1 + 1) & 8) == 0)) {
      FUN_100150f2((uint)(hLibModule != (HMODULE)0x0),pFVar3,local_c,local_8,param_5);
      goto LAB_10014f64;
    }
    param_2 = (byte *)FUN_1000bc0e(local_8);
    FUN_1000b97c((int *)&param_2,1);
    FUN_10009f15(DAT_10023e84,param_2,0x7800);
    if (hLibModule == (HMODULE)0x0) {
      puVar6 = &DAT_10024080;
      DAT_1002408e = DAT_1002402c;
      _DAT_100240a0 = DAT_10023e84;
      _DAT_1002409c = DAT_1001f030;
    }
    else {
      _DAT_100241b4 = (uint)DAT_1002402c;
      _DAT_100241c4 = DAT_1001f030;
      _DAT_100241d8 = DAT_10023edc;
      _DAT_100241c8 = DAT_10023e84;
      puVar6 = &DAT_100241a0;
    }
    pHVar5 = (HMODULE)(*pFVar3)(puVar6);
    if (((*(byte *)(*piVar1 + 1) & 8) == 0) &&
       (DAT_1002402c = DAT_100241b4, hLibModule == (HMODULE)0x0)) {
      DAT_1002402c = DAT_1002408e;
    }
  }
  if (((*(byte *)(*piVar1 + 1) & 8) == 0) && (hLibModule != (HMODULE)0x0)) {
    FreeLibrary(hLibModule);
  }
LAB_10014f7e:
  if (param_1 != (int *)0x0) {
    if (param_1 == (int *)0x2) {
      wsprintfA(local_10c,s__s___s__1001feb8,local_50c,local_b0c);
    }
    else {
      lstrcpyA(local_10c,(LPCSTR)local_50c);
    }
    wsprintfA(local_70c,*(LPCSTR *)(DAT_100240b8 + 0x18),local_10c);
    FUN_1000b352(local_70c);
    return 0xfffffffe;
  }
  if (pHVar5 == (HMODULE)0x0) {
    bVar2 = *(byte *)(*piVar1 + 1) & 3;
    if (1 < bVar2) {
      if (bVar2 == 3) {
        *(char *)&param_3->unused = (char)param_3->unused + -1;
        bVar2 = *(byte *)(*piVar1 + 1);
        if ((bVar2 & 0x20) != 0) {
          *(byte *)(*piVar1 + 1) = bVar2 ^ 0x30;
        }
      }
      iVar4 = (*(code *)param_4)();
      if (iVar4 != 0) {
        return 0xffffffff;
      }
    }
  }
  else if ((*(byte *)(*piVar1 + 1) & 3) == 1) {
    return 0xfffffffe;
  }
  return 0;
}


