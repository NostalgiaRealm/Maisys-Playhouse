
/* ==== FUN_1101d0b0 @ 1101d0b0 ==== 
 * signature: undefined2 __cdecl FUN_1101d0b0(undefined4 param_1, int param_2, short * param_3, undefined2 * param_4)
 * body: 1101d0b0-1101d171
 */

undefined2 __cdecl FUN_1101d0b0(undefined4 param_1,int param_2,short *param_3,undefined2 *param_4)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = 0;
  sVar1 = *param_3;
  if (0x19 < sVar1) {
    if (sVar1 == 0x1f9) {
      iVar2 = *(int *)(param_3 + 1);
      *param_4 = 0x3e81;
      iVar2 = iVar2 * 0xe;
      *(undefined4 *)(param_4 + 1) = *(undefined4 *)(*(int *)(param_2 + 0x1c) + 2 + iVar2);
      *(undefined4 *)(param_4 + 3) = *(undefined4 *)(*(int *)(param_2 + 0x1c) + 6 + iVar2);
      *(undefined4 *)(param_4 + 5) = *(undefined4 *)(*(int *)(param_2 + 0x1c) + 10 + iVar2);
      return uVar3;
    }
    if (sVar1 != 0x1fb) {
      if (sVar1 != 0x1fc) {
        return 0xffff;
      }
      *param_4 = 2;
      *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_3 + 3);
      return uVar3;
    }
    *param_4 = 3;
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_3 + 3);
    return uVar3;
  }
  if (sVar1 == 0x19) {
    *param_4 = 2;
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_3 + 1);
    return uVar3;
  }
  if (sVar1 != 3) {
    return 0xffff;
  }
  *param_4 = 3;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_3 + 1);
  return uVar3;
}


