
/* ==== f17 @ 1000e81d ==== 
 * signature: undefined4 __stdcall f17(int param_1)
 * body: 1000e81d-1000e8c0
 */

undefined4 f17(int param_1)

{
  char *pcVar1;
  LPCSTR lpString2;
  char local_244 [256];
  byte local_144 [256];
  char local_44 [32];
  char local_24 [32];
  
                    /* 0xe81d  23  f17 */
  pcVar1 = FUN_10010950(local_44,*(char **)(param_1 + 0x20));
  pcVar1 = FUN_10010950(local_24,pcVar1);
  pcVar1 = FUN_10010950((char *)local_144,pcVar1);
  FUN_10010950(local_244,pcVar1);
  lpString2 = (LPCSTR)FUN_10015990(local_144);
  if (lpString2 == (LPCSTR)0x0) {
    lstrcpyA(&DAT_10023bc0,local_244);
  }
  else {
    lstrcpynA(&DAT_10023bc0,lpString2,0xff);
    DAT_10023cbf = 0;
    if (local_44[0] != '0') {
      FUN_10010cf9(&DAT_10023bc0);
    }
  }
  FUN_100105d2(local_24,&DAT_10023bc0);
  return 0;
}


