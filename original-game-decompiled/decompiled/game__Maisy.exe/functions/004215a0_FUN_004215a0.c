
/* ==== FUN_004215a0 @ 004215a0 ==== 
 * signature: uint __fastcall FUN_004215a0(int * param_1)
 * body: 004215a0-004215db
 */

uint __fastcall FUN_004215a0(int *param_1)

{
  int iVar1;
  undefined2 extraout_var;
  uint uVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x15e);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x26) != 0)) {
    iVar1 = *param_1;
    (**(code **)(iVar1 + 0x114))();
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 0x10;
    uVar2 = (**(code **)(iVar1 + 0xc4))(0,CONCAT22(extraout_var,(short)param_1[9]));
    return uVar2 & 0xffff0000;
  }
  return CONCAT22((short)((uint)iVar1 >> 0x10),1);
}


