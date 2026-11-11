
/* ==== f20 @ 1000ea9b ==== 
 * signature: undefined4 __stdcall f20(int param_1)
 * body: 1000ea9b-1000eafd
 */

undefined4 f20(int param_1)

{
  char *pcVar1;
  uint uVar2;
  byte local_104 [256];
  
                    /* 0xea9b  26  f20 */
  if (*(char *)(param_1 + 0x18) != '\x01') {
    pcVar1 = FUN_10010950((char *)local_104,*(char **)(param_1 + 0x20));
    uVar2 = FUN_10016230(local_104);
    FUN_10010950((char *)local_104,pcVar1);
    FUN_10010336((LPCSTR)local_104,uVar2,0);
  }
  return 0;
}


