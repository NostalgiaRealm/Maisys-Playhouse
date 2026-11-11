
/* ==== FUN_1101c7e0 @ 1101c7e0 ==== 
 * signature: short __cdecl FUN_1101c7e0(undefined4 * param_1, int param_2, short * param_3, undefined2 * param_4)
 * body: 1101c7e0-1101c891
 */

short __cdecl FUN_1101c7e0(undefined4 *param_1,int param_2,short *param_3,undefined2 *param_4)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short local_30 [24];
  
  sVar1 = *param_3;
  if (sVar1 == 0x19) {
    sVar1 = FUN_1101c640(param_1,local_30,*(undefined4 *)(param_3 + 1),(undefined2 *)0x0);
    if (sVar1 == 0) {
      psVar3 = local_30;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)param_3 = *(undefined4 *)psVar3;
        psVar3 = psVar3 + 2;
        param_3 = param_3 + 2;
      }
    }
    return 0;
  }
  if (sVar1 == 0x1c) {
    sVar1 = FUN_1101c730(param_1,local_30,(int)param_3,param_4);
    if (sVar1 == 0) {
      psVar3 = local_30;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)param_3 = *(undefined4 *)psVar3;
        psVar3 = psVar3 + 2;
        param_3 = param_3 + 2;
      }
      return 0;
    }
  }
  else {
    if (sVar1 != 0x1f9) {
      return 0;
    }
    sVar1 = FUN_1101c730(param_1,param_3,*(int *)(param_3 + 1) * 0xe + *(int *)(param_2 + 0x1c),
                         param_4);
  }
  return sVar1;
}


