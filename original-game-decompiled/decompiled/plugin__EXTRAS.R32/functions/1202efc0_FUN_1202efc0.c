
/* ==== FUN_1202efc0 @ 1202efc0 ==== 
 * signature: undefined4 __stdcall FUN_1202efc0(void)
 * body: 1202efc0-1202f06b
 */

undefined4 FUN_1202efc0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (DAT_12038564 == 0) {
    PTR_PTR_120393fc = (undefined *)&PTR_DAT_12039350;
    FUN_1202f3f0(DAT_12038b08);
    FUN_1202c7c0(DAT_12038b08);
    DAT_12038b08 = (undefined4 *)0x0;
    return 0;
  }
  puVar1 = FUN_1202c3b0(1,0xac);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  uVar2 = __get_lc_time((LCTYPE)puVar1);
  if (uVar2 != 0) {
    FUN_1202f3f0(puVar1);
    FUN_1202c7c0(puVar1);
    return 1;
  }
  PTR_PTR_120393fc = (undefined *)puVar1;
  FUN_1202f3f0(DAT_12038b08);
  FUN_1202c7c0(DAT_12038b08);
  DAT_12038b08 = puVar1;
  return 0;
}


