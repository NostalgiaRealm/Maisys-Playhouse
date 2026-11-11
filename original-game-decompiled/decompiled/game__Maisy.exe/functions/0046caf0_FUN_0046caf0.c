
/* ==== FUN_0046caf0 @ 0046caf0 ==== 
 * signature: undefined __fastcall FUN_0046caf0(int param_1)
 * body: 0046caf0-0046cb22
 */

void __fastcall FUN_0046caf0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a) == 0) {
    if (*(short *)(param_1 + 0x60) != 0) {
      return;
    }
    if ((*(int *)(param_1 + 0x62) != 0) &&
       ((*(byte *)(*(int *)(param_1 + 0x62) + 0x21) & 0x40) != 0)) {
      for (iVar1 = *(int *)(param_1 + 0x66); (iVar1 != 0 && (*(short *)(iVar1 + 0x60) != 0));
          iVar1 = *(int *)(iVar1 + 0x66)) {
      }
    }
  }
  return;
}


