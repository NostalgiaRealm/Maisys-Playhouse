
/* ==== FUN_004240c0 @ 004240c0 ==== 
 * signature: undefined __fastcall FUN_004240c0(int param_1)
 * body: 004240c0-004240e4
 */

void __fastcall FUN_004240c0(int param_1)

{
  int iVar1;
  
  for (iVar1 = FUN_004246a0(param_1);
      ((iVar1 != 0 && ((*(uint *)(iVar1 + 0x1e) & 0x400) != 0)) &&
      ((*(uint *)(iVar1 + 0x26) & 0x80000000) != 0)); iVar1 = *(int *)(iVar1 + 0x3e)) {
  }
  return;
}


