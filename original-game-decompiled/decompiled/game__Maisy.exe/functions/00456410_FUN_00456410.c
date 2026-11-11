
/* ==== FUN_00456410 @ 00456410 ==== 
 * signature: int __cdecl FUN_00456410(short * param_1, undefined4 * param_2, int * param_3)
 * body: 00456410-0045648b
 */

int __cdecl FUN_00456410(short *param_1,undefined4 *param_2,int *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 local_30;
  undefined4 local_2e;
  undefined4 local_2a;
  
  sVar1 = *param_1;
  if (sVar1 == 0xd) {
    uVar2 = *(undefined4 *)(param_1 + 3);
    *param_2 = *(undefined4 *)(param_1 + 1);
    param_2[1] = uVar2;
    return 0;
  }
  if ((sVar1 != 0x69) && (sVar1 != 0x73)) {
    return 0x60002;
  }
  FUN_004537b0(param_1,param_3);
  local_30 = 0xd;
  iVar3 = FUN_00453ed0(*(int **)(param_1 + 1),&local_30);
  if (iVar3 == 0) {
    *param_2 = local_2e;
    param_2[1] = local_2a;
  }
  return iVar3;
}


