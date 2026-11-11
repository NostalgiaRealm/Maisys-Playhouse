
/* ==== f27 @ 1000f653 ==== 
 * signature: undefined4 __stdcall f27(int param_1)
 * body: 1000f653-1000f895
 */

undefined4 f27(int param_1)

{
  CHAR CVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  LPSTR _Str1;
  int iVar5;
  byte bVar6;
  byte local_150 [256];
  char local_50 [32];
  byte local_30 [32];
  size_t local_10;
  int local_c;
  int local_8;
  
                    /* 0xf653  31  f27 */
  pcVar3 = FUN_10010950((char *)local_30,*(char **)(param_1 + 0x20));
  bVar2 = FUN_10016230(local_30);
  pcVar3 = FUN_10010950(DAT_10023e94,pcVar3);
  pcVar3 = FUN_10010950((char *)local_150,pcVar3);
  pcVar3 = FUN_10010950((char *)local_30,pcVar3);
  FUN_10010950(local_50,pcVar3);
  if (local_30[0] != 0) {
    FUN_100105d2((LPCSTR)local_30,&DAT_10023314);
  }
  if (local_50[0] != '\0') {
    FUN_100105d2(local_50,&DAT_10023314);
  }
  if (local_150[0] == 0) {
    return 0;
  }
  if (*DAT_10023e94 == '\0') {
    return 0;
  }
  lstrcpyA(DAT_10024170,DAT_10023e94);
  if ((bVar2 & 2) != 0) {
    CharUpperA((LPSTR)local_150);
    CharUpperA(DAT_10024170);
  }
  iVar4 = lstrlenA(DAT_10023e94);
  local_c = iVar4;
  local_10 = lstrlenA((LPCSTR)local_150);
  bVar6 = bVar2 & 0xc;
  if (bVar6 < 8) {
    local_8 = lstrlenA((LPCSTR)local_150);
    pcVar3 = DAT_10024170;
    if (bVar6 == 0) {
      while ((*pcVar3 != '\0' && (iVar4 = _strncmp(pcVar3,(char *)local_150,local_10), iVar4 != 0)))
      {
        pcVar3 = CharNextA(pcVar3);
      }
    }
    else {
      pcVar3 = (char *)0x0;
      for (_Str1 = DAT_10024170; *_Str1 != '\0'; _Str1 = CharNextA(_Str1)) {
        iVar4 = _strncmp(_Str1,(char *)local_150,local_10);
        if (iVar4 == 0) {
          pcVar3 = _Str1;
        }
      }
      if (pcVar3 == (char *)0x0) {
        local_8 = 0;
        iVar5 = 0;
        goto LAB_1000f7f3;
      }
    }
    iVar5 = (int)pcVar3 - (int)DAT_10024170;
  }
  else {
    local_8 = 0;
    iVar5 = FUN_10016230(local_150);
    if (bVar6 != 8) {
      iVar5 = iVar4 - iVar5;
    }
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    if (iVar4 < iVar5) {
      iVar5 = iVar4;
    }
  }
LAB_1000f7f3:
  CVar1 = DAT_10023e94[iVar5];
  DAT_10023e94[iVar5] = '\0';
  if (local_30[0] != 0) {
    if ((bVar2 & 1) == 0) {
      lstrcpyA(DAT_10024170,DAT_10023e94);
    }
    else {
      FUN_100102fe(DAT_10024170,DAT_10023e94);
    }
    FUN_100105d2((LPCSTR)local_30,DAT_10024170);
  }
  DAT_10023e94[iVar5] = CVar1;
  iVar4 = iVar5 + local_8;
  if (local_c < iVar5 + local_8) {
    iVar4 = local_c;
  }
  if (local_50[0] != '\0') {
    if ((bVar2 & 1) == 0) {
      lstrcpyA(DAT_10024170,DAT_10023e94 + iVar4);
    }
    else {
      FUN_100102fe(DAT_10024170,DAT_10023e94 + iVar4);
    }
    FUN_100105d2(local_50,DAT_10024170);
  }
  return 0;
}


