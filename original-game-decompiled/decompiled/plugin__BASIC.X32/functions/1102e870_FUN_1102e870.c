
/* ==== FUN_1102e870 @ 1102e870 ==== 
 * signature: undefined4 __stdcall FUN_1102e870(void)
 * body: 1102e870-1102e91b
 */

undefined4 FUN_1102e870(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (DAT_11036c8c == 0) {
    PTR_PTR_11037b0c = (undefined *)&PTR_DAT_11037a60;
    FUN_1102eca0(DAT_11037220);
    FUN_11029180(DAT_11037220);
    DAT_11037220 = (undefined4 *)0x0;
    return 0;
  }
  puVar1 = FUN_110291a0(1,0xac);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  uVar2 = __get_lc_time((LCTYPE)puVar1);
  if (uVar2 != 0) {
    FUN_1102eca0(puVar1);
    FUN_11029180(puVar1);
    return 1;
  }
  PTR_PTR_11037b0c = (undefined *)puVar1;
  FUN_1102eca0(DAT_11037220);
  FUN_11029180(DAT_11037220);
  DAT_11037220 = puVar1;
  return 0;
}


