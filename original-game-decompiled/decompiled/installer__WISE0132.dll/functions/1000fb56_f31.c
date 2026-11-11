
/* ==== f31 @ 1000fb56 ==== 
 * signature: undefined4 __stdcall f31(char * param_1)
 * body: 1000fb56-1000fedf
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 f31(char *param_1)

{
  char *pcVar1;
  int iVar2;
  SIZE_T SVar3;
  LPCSTR pCVar4;
  LPCSTR pCVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte local_450 [256];
  byte local_350 [256];
  char local_250 [256];
  byte local_150 [256];
  byte local_50 [32];
  byte local_30 [32];
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0xfb56  36  f31 */
  if (*(int *)(DAT_1002392c + 0x30) == 0) {
    pcVar1 = FUN_10010950((char *)local_30,*(char **)(param_1 + 0x20));
    DAT_10024024 = FUN_10016230(local_30);
    pcVar1 = FUN_10010950((char *)local_30,pcVar1);
    FUN_1001054d((LPCSTR)local_30,local_250);
    local_10 = 0;
    if (local_250[0] == 'B') {
      local_c = 0;
    }
    else {
      if ((local_250[0] != 'N') && (DAT_10023e20 != 0)) {
        return 1;
      }
      local_c = 1;
    }
    pcVar1 = FUN_10010950((char *)local_30,pcVar1);
    FUN_1001054d((LPCSTR)local_30,local_250);
    pcVar1 = FUN_10010950((char *)local_150,pcVar1);
    DAT_1002404c = FUN_10016230(local_150);
    pcVar1 = FUN_10010950((char *)local_150,pcVar1);
    DAT_100239a0 = FUN_10016230(local_150);
    pcVar1 = FUN_10010950((char *)local_150,pcVar1);
    _DAT_100240b4 = FUN_10016190(local_150);
    DAT_100241f4 = _DAT_100240b4;
    pcVar1 = FUN_10010950((char *)local_150,pcVar1);
    iVar2 = FUN_10016190(local_150);
    pcVar1 = FUN_10010950((char *)local_150,pcVar1);
    local_8 = FUN_10016190(local_150);
    param_1 = FUN_10010950((char *)local_150,pcVar1);
    SVar3 = FUN_10016190(local_150);
    iVar7 = _DAT_100240b0;
    if ((SVar3 != 0) && (DAT_10023e20 == 0)) {
      _DAT_100240b0 = 0;
      if (DAT_100238c8 != 0) {
        FUN_10013e71(DAT_10024064);
      }
      DAT_100238c8 = FUN_10013e57(SVar3,&DAT_10024064);
      iVar7 = DAT_100238c8;
      if (DAT_100238c8 != 0) {
        *(int *)(DAT_1002392c + 8) = iVar2 + DAT_100238bc;
        FUN_1000bde0();
        *(int *)(DAT_1002392c + 0x8c) = DAT_100238c8;
        DAT_10023f9c = 0;
        FUN_10013192(*(undefined4 *)(DAT_1002392c + 0x18),(HANDLE)0x0,local_8,0);
        *(undefined4 *)(DAT_1002392c + 0x8c) = 0;
        iVar7 = DAT_100238c8;
      }
    }
    _DAT_100240b0 = iVar7;
    DAT_10023e20 = 1;
    local_150[0] = 0;
    while (*param_1 != '\0') {
      param_1 = FUN_10010950((char *)local_350,param_1);
      local_8 = 1;
      pCVar4 = FUN_100147fa((LPCSTR)local_350,9);
      if (pCVar4 != (LPCSTR)0x0) {
        *pCVar4 = '\0';
        pCVar5 = FUN_100147fa(pCVar4 + 1,9);
        if (pCVar5 != (LPCSTR)0x0) {
          *pCVar5 = '\0';
          lstrcpyA((LPSTR)local_50,pCVar4 + 1);
          pCVar4 = FUN_100147fa(pCVar5 + 1,9);
          if (pCVar4 != (LPCSTR)0x0) {
            *pCVar4 = '\0';
            lstrcpyA((LPSTR)local_450,pCVar5 + 1);
            pbVar9 = local_450;
            pbVar8 = local_50;
            uVar6 = FUN_10016230((byte *)(pCVar4 + 1));
            uVar6 = FUN_1000a18e(uVar6,pbVar8,pbVar9);
            if (uVar6 != 0) {
              local_8 = 0;
            }
          }
        }
      }
      if (local_8 != 0) {
        if ((local_250[0] == '\0') || ((local_c != 0 && (local_10 != 0)))) {
          pbVar8 = local_350;
LAB_1000fe88:
          FUN_100105d2((LPCSTR)local_30,(LPCSTR)pbVar8);
          return 1;
        }
        iVar7 = lstrcmpiA(local_250,(LPCSTR)local_350);
        if (iVar7 == 0) {
          if (local_c == 0) {
            if (local_150[0] == 0) {
              return 1;
            }
            pbVar8 = local_150;
            goto LAB_1000fe88;
          }
          local_10 = 1;
        }
        lstrcpyA((LPSTR)local_150,(LPCSTR)local_350);
      }
    }
    if (DAT_100238cc != (HWND)0x0) {
      EnableWindow(DAT_100238d8,1);
      DestroyWindow(DAT_100238cc);
      DAT_100238cc = (HWND)0x0;
    }
    DAT_10023e20 = 0;
    FUN_100105d2((LPCSTR)local_30,&DAT_10023314);
  }
  return 0;
}


