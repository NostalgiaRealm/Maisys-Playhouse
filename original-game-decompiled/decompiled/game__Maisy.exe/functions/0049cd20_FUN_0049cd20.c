
/* ==== FUN_0049cd20 @ 0049cd20 ==== 
 * signature: undefined4 __stdcall FUN_0049cd20(void)
 * body: 0049cd20-0049cdcb
 */

undefined4 FUN_0049cd20(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (DAT_004de6ac == 0) {
    PTR_PTR_004de16c = (undefined *)&PTR_DAT_004de0c0;
    FUN_0049d150(DAT_004df3c8);
    FUN_0048e750(DAT_004df3c8);
    DAT_004df3c8 = (undefined4 *)0x0;
    return 0;
  }
  puVar1 = FUN_0048ebf0(1,0xac);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  uVar2 = __get_lc_time((LCTYPE)puVar1);
  if (uVar2 != 0) {
    FUN_0049d150(puVar1);
    FUN_0048e750(puVar1);
    return 1;
  }
  PTR_PTR_004de16c = (undefined *)puVar1;
  FUN_0049d150(DAT_004df3c8);
  FUN_0048e750(DAT_004df3c8);
  DAT_004df3c8 = puVar1;
  return 0;
}


