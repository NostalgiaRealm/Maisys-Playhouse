
/* ==== FUN_1401cd70 @ 1401cd70 ==== 
 * signature: undefined4 __stdcall FUN_1401cd70(void)
 * body: 1401cd70-1401ce1b
 */

undefined4 FUN_1401cd70(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (DAT_140272cc == 0) {
    PTR_PTR_1402825c = (undefined *)&PTR_DAT_140281b0;
    FUN_1401d1a0(DAT_14027638);
    FUN_1401dd10(DAT_14027638);
    DAT_14027638 = (undefined4 *)0x0;
    return 0;
  }
  puVar1 = FUN_1401e520(1,0xac);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  uVar2 = __get_lc_time((LCTYPE)puVar1);
  if (uVar2 != 0) {
    FUN_1401d1a0(puVar1);
    FUN_1401dd10(puVar1);
    return 1;
  }
  PTR_PTR_1402825c = (undefined *)puVar1;
  FUN_1401d1a0(DAT_14027638);
  FUN_1401dd10(DAT_14027638);
  DAT_14027638 = puVar1;
  return 0;
}


