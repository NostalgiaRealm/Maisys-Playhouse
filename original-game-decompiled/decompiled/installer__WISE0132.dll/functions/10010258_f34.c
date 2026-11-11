
/* ==== f34 @ 10010258 ==== 
 * signature: undefined4 __stdcall f34(int param_1)
 * body: 10010258-100102fd
 */

undefined4 f34(int param_1)

{
  char *pcVar1;
  int iVar2;
  byte *pbVar3;
  byte local_104 [256];
  
                    /* 0x10258  38  f34 */
  if (DAT_10023e9c != '\x01') {
    pcVar1 = FUN_10010950((char *)local_104,*(char **)(param_1 + 0x20));
    iVar2 = FUN_10016230(local_104);
    pbVar3 = (byte *)FUN_10010950((char *)local_104,pcVar1);
    FUN_10009eff(local_104,local_104);
    FUN_10009f15(DAT_10024170,pbVar3,0x7800);
    iVar2 = FUN_10013e86(local_104,DAT_10024170,-1 - iVar2,0,0,0);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


