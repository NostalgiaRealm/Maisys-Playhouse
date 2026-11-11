
/* ==== f22 @ 1000eed3 ==== 
 * signature: undefined4 __stdcall f22(int param_1)
 * body: 1000eed3-1000efa8
 */

undefined4 f22(int param_1)

{
  char *pcVar1;
  char local_144 [256];
  char local_44 [32];
  char local_24 [32];
  
                    /* 0xeed3  28  f22 */
  pcVar1 = FUN_10010950(local_44,*(char **)(param_1 + 0x20));
  pcVar1 = FUN_10010950(local_24,pcVar1);
  pcVar1 = FUN_10010950(&DAT_100239c0,pcVar1);
  pcVar1 = FUN_10010950(local_144,pcVar1);
  pcVar1 = FUN_10010950(&DAT_10023ac0,pcVar1);
  FUN_10010950(&DAT_10023bc0,pcVar1);
  DAT_10023cc0 = '\0';
  if (DAT_10023bc0 == '\0') {
    FUN_10011094(&DAT_100239c0,&DAT_10023cc0);
  }
  else {
    DAT_10023e34 = 1;
    DialogBoxParamA(DAT_10024178,(LPCSTR)0x67,*(HWND *)(param_1 + 4),SearchDlg,0);
  }
  if (DAT_10023cc0 == '\0') {
    pcVar1 = local_144;
  }
  else {
    if (local_44[0] != '0') {
      FUN_10010cf9(&DAT_10023cc0);
    }
    pcVar1 = &DAT_10023cc0;
  }
  FUN_100105d2(local_24,pcVar1);
  return 0;
}


