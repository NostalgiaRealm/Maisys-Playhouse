
/* ==== FUN_004b7d93 @ 004b7d93 ==== 
 * signature: int __fastcall FUN_004b7d93(int param_1)
 * body: 004b7d93-004b7da8
 */

int __fastcall FUN_004b7d93(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x8c) + 0x20000;
  }
  return iVar1;
}


