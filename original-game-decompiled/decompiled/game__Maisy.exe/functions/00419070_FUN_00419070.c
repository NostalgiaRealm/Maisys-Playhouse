
/* ==== FUN_00419070 @ 00419070 ==== 
 * signature: undefined4 __fastcall FUN_00419070(int param_1)
 * body: 00419070-004190a0
 */

undefined4 __fastcall FUN_00419070(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x15c) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x152) - *(int *)(param_1 + 0x156);
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  iVar1 = *(int *)(param_1 + 0x14e) - *(int *)(param_1 + 0x156);
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
}


