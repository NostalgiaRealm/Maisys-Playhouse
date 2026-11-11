
/* ==== FUN_004a2a6b @ 004a2a6b ==== 
 * signature: undefined4 __stdcall FUN_004a2a6b(int param_1)
 * body: 004a2a6b-004a2a8c
 */

undefined4 FUN_004a2a6b(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004bafca();
  *(char *)(iVar1 + 0x14) = (char)param_1;
  if (param_1 == 0) {
    __setmbcp(-3);
  }
  return 1;
}


