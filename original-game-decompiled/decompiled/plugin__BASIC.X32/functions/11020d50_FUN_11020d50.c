
/* ==== FUN_11020d50 @ 11020d50 ==== 
 * signature: uint __cdecl FUN_11020d50(undefined4 * param_1, undefined2 * param_2, undefined2 param_3, short param_4)
 * body: 11020d50-11020d8a
 */

uint __cdecl FUN_11020d50(undefined4 *param_1,undefined2 *param_2,undefined2 param_3,short param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)param_4;
  *param_2 = 0x1fd;
  *(int *)(param_2 + 1) = iVar2;
  param_2[7] = param_3;
  *(int *)(param_2 + 5) = iVar2;
  *(undefined4 *)(param_2 + 3) = 0;
  uVar1 = FUN_110026d0(param_1,iVar2);
  *(uint *)(param_2 + 8) = uVar1;
  return uVar1 & 0xffff0000;
}


