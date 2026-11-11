
/* ==== FUN_004a7ec8 @ 004a7ec8 ==== 
 * signature: undefined4 __fastcall FUN_004a7ec8(int param_1)
 * body: 004a7ec8-004a7ed6
 */

undefined4 __fastcall FUN_004a7ec8(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x4c);
  }
  return uVar1;
}


