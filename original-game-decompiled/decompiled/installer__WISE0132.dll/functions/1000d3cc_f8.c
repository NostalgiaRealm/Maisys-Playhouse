
/* ==== f8 @ 1000d3cc ==== 
 * signature: undefined4 __stdcall f8(int param_1)
 * body: 1000d3cc-1000d490
 */

undefined4 f8(int param_1)

{
  char *pcVar1;
  char local_144 [256];
  char local_44 [32];
  char local_24 [32];
  
                    /* 0xd3cc  40  f8 */
  pcVar1 = FUN_10010950(local_44,*(char **)(param_1 + 0x20));
  pcVar1 = FUN_10010950(local_24,pcVar1);
  pcVar1 = FUN_10010950(&DAT_10023bc0,pcVar1);
  pcVar1 = FUN_10010950(&DAT_10023cc0,pcVar1);
  pcVar1 = FUN_10010950(&DAT_100239c0,pcVar1);
  FUN_10010950(&DAT_10023ac0,pcVar1);
  GetPrivateProfileStringA(&DAT_10023cc0,&DAT_100239c0,&DAT_10023314,local_144,0x100,&DAT_10023bc0);
  if (local_144[0] == '\0') {
    lstrcpyA(local_144,&DAT_10023ac0);
  }
  else if (local_44[0] != '0') {
    FUN_10010cf9(local_144);
  }
  FUN_100105d2(local_24,local_144);
  return 0;
}


