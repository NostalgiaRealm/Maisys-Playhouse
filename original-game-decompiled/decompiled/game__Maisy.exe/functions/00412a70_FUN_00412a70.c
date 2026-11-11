
/* ==== FUN_00412a70 @ 00412a70 ==== 
 * signature: undefined __fastcall FUN_00412a70(int param_1)
 * body: 00412a70-00412a9c
 */

void __fastcall FUN_00412a70(int param_1)

{
  int iVar1;
  
  for (iVar1 = FUN_00412500(param_1);
      ((iVar1 != 0 && ((*(uint *)(iVar1 + 0x1e) & 0x400) != 0)) &&
      ((*(uint *)(iVar1 + 0x26) & 0x80000000) != 0)); iVar1 = FUN_00412500(iVar1)) {
  }
  return;
}


