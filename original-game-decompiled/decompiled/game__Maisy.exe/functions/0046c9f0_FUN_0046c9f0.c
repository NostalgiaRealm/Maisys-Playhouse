
/* ==== FUN_0046c9f0 @ 0046c9f0 ==== 
 * signature: int __fastcall FUN_0046c9f0(int param_1)
 * body: 0046c9f0-0046ca0f
 */

int __fastcall FUN_0046c9f0(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x22) == 0x43) {
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (*(short *)(iVar1 + 0x22) == 1)) {
    iVar1 = FUN_00458a00(iVar1);
    return iVar1;
  }
  return 0;
}


