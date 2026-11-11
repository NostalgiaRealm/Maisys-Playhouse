
/* ==== FUN_00423780 @ 00423780 ==== 
 * signature: undefined4 __cdecl FUN_00423780(undefined4 * param_1, int * param_2)
 * body: 00423780-004237d6
 */

undefined4 __cdecl FUN_00423780(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char **ppcVar3;
  char *local_18;
  int local_14;
  int *local_c;
  
  ppcVar3 = &local_18;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppcVar3 = (char *)*param_1;
    param_1 = param_1 + 1;
    ppcVar3 = ppcVar3 + 1;
  }
  local_18 = FUN_0043b9c0(local_18,0xff);
  if (local_14 == 1) {
    local_c = (int *)(**(code **)(*local_c + 0x13c))();
  }
  uVar1 = (**(code **)(*param_2 + 0xe8))(&local_18);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


