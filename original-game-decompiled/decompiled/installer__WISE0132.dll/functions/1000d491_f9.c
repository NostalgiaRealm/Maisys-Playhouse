
/* ==== f9 @ 1000d491 ==== 
 * signature: undefined4 __stdcall f9(int param_1)
 * body: 1000d491-1000d562
 */

undefined4 f9(int param_1)

{
  char *pcVar1;
  uint uVar2;
  LSTATUS LVar3;
  char local_344 [256];
  char local_244 [256];
  char local_144 [256];
  char local_44 [32];
  byte local_24 [32];
  
                    /* 0xd491  41  f9 */
  pcVar1 = FUN_10010950((char *)local_24,*(char **)(param_1 + 0x20));
  uVar2 = FUN_10016230(local_24);
  pcVar1 = FUN_10010950(local_44,pcVar1);
  pcVar1 = FUN_10010950(local_244,pcVar1);
  pcVar1 = FUN_10010950(local_344,pcVar1);
  FUN_10010950(local_144,pcVar1);
  LVar3 = FUN_10004d80((HKEY)((int)uVar2 >> 1),local_244,DAT_10023e84,local_144,(char *)&param_1,
                       0x7800,0);
  if (LVar3 == 0) {
    if ((uVar2 & 1) != 0) {
      FUN_10010cf9((LPCSTR)DAT_10023e84);
    }
  }
  else {
    lstrcpyA((LPSTR)DAT_10023e84,local_344);
  }
  FUN_100105d2(local_44,(LPCSTR)DAT_10023e84);
  return 0;
}


