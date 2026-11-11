
/* ==== FUN_110242f0 @ 110242f0 ==== 
 * signature: undefined __cdecl FUN_110242f0(undefined4 * param_1, int param_2, int param_3)
 * body: 110242f0-1102433a
 */

void __cdecl FUN_110242f0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  HRGN pHVar2;
  
  if (*(short *)(param_2 + 0x22) == 1) {
    iVar1 = FUN_110246b0(*(short **)(param_3 + 4),*(short **)(param_3 + 8));
    if (iVar1 != 0) {
      *(undefined4 *)(param_3 + 0x1a) = 0;
      return;
    }
  }
  pHVar2 = FUN_11024340(param_1,*(short **)(param_3 + 4),param_2);
  *(HRGN *)(param_3 + 0x1a) = pHVar2;
  return;
}


