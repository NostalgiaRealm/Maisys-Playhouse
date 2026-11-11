
/* ==== FUN_11004280 @ 11004280 ==== 
 * signature: undefined __cdecl FUN_11004280(undefined4 param_1, int param_2, undefined4 * param_3)
 * body: 11004280-110042ba
 */

void __cdecl FUN_11004280(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    param_3[4] = 0;
  }
  else {
    iVar1 = FUN_11013e50(param_1,*(int *)(param_2 + 0x14));
    param_3[4] = iVar1;
  }
  *param_3 = *(undefined4 *)(param_2 + 0xc);
  param_3[1] = *(undefined4 *)(param_2 + 0x10);
  return;
}


