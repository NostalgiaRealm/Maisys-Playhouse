
/* ==== f13 @ 1000dacd ==== 
 * signature: undefined4 __stdcall f13(int param_1)
 * body: 1000dacd-1000dc1e
 */

undefined4 f13(int param_1)

{
  char *pcVar1;
  int iVar2;
  char local_164 [256];
  CHAR local_64 [32];
  byte local_44 [32];
  char local_24 [32];
  
                    /* 0xdacd  20  f13 */
  pcVar1 = FUN_10010950((char *)local_44,*(char **)(param_1 + 0x20));
  DAT_10023918 = FUN_10016230(local_44);
  pcVar1 = FUN_10010950(local_24,pcVar1);
  pcVar1 = FUN_10010950(&DAT_100239c0,pcVar1);
  pcVar1 = FUN_10010950(local_164,pcVar1);
  FUN_10010950(&DAT_10023bc0,pcVar1);
  DAT_10023cc0 = '\0';
  DAT_10024194 = DAT_10023918 >> 3;
  if ((DAT_10023bc0 == '\0') || (*(int *)(DAT_1002392c + 0x30) != 0)) {
    param_1 = 0x41;
    do {
      if (DAT_10023cc0 != '\0') goto LAB_1000dbf5;
      iVar2 = FUN_10011fc8(param_1 + -0x41);
      if ((iVar2 == 3) && ((DAT_10023918 & 2) == 0)) {
LAB_1000dbb6:
        wsprintfA(local_64,s__c______1001f4b4,param_1);
        FUN_10010bdf(local_64,&DAT_100239c0,1,'\0');
      }
      else {
        iVar2 = FUN_10011fc8(param_1 + -0x41);
        if ((iVar2 == 4) && ((DAT_10023918 & 6) != 0)) goto LAB_1000dbb6;
      }
      param_1 = param_1 + 1;
    } while (param_1 < 0x5b);
  }
  else {
    DAT_10023e34 = 0;
    DialogBoxParamA(DAT_10024178,(LPCSTR)0x67,*(HWND *)(param_1 + 4),SearchDlg,0);
  }
  if (DAT_10023cc0 == '\0') {
    pcVar1 = local_164;
  }
  else {
LAB_1000dbf5:
    if ((DAT_10023918 & 1) != 0) {
      FUN_10010cf9(&DAT_10023cc0);
    }
    pcVar1 = &DAT_10023cc0;
  }
  FUN_100105d2(local_24,pcVar1);
  return 0;
}


