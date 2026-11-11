
/* ==== FUN_00428d90 @ 00428d90 ==== 
 * signature: int __fastcall FUN_00428d90(int param_1)
 * body: 00428d90-00428da3
 */

int __fastcall FUN_00428d90(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x1a) != 0) {
    iVar1 = *(int *)(param_1 + 0x1e);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x40);
  }
  return iVar1;
}


