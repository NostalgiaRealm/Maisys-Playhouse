
/* ==== FUN_00412a40 @ 00412a40 ==== 
 * signature: undefined __fastcall FUN_00412a40(int param_1)
 * body: 00412a40-00412a62
 */

void __fastcall FUN_00412a40(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x3e);
      ((iVar1 != 0 && ((*(uint *)(iVar1 + 0x1e) & 0x400) != 0)) &&
      ((*(uint *)(iVar1 + 0x26) & 0x80000000) != 0)); iVar1 = *(int *)(iVar1 + 0x3e)) {
  }
  return;
}


