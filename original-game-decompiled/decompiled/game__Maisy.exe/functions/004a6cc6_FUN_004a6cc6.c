
/* ==== FUN_004a6cc6 @ 004a6cc6 ==== 
 * signature: int __fastcall FUN_004a6cc6(int param_1)
 * body: 004a6cc6-004a6cd8
 */

int __fastcall FUN_004a6cc6(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x3c) + 0x20000;
  }
  return iVar1;
}


