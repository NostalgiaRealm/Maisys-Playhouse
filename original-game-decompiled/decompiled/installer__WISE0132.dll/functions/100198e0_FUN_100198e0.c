
/* ==== FUN_100198e0 @ 100198e0 ==== 
 * signature: undefined4 __stdcall FUN_100198e0(void)
 * body: 100198e0-1001998d
 */

undefined4 FUN_100198e0(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_10023404 == 0) {
    PTR_PTR_10023194 = (undefined *)&PTR_DAT_100230e8;
    FUN_10019d10(DAT_10023760);
    FUN_10015a50((undefined *)DAT_10023760);
    DAT_10023760 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_10019830(1,0xac);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = FUN_10019990((char *)piVar1);
  if (uVar2 != 0) {
    FUN_10019d10(piVar1);
    FUN_10015a50((undefined *)piVar1);
    return 1;
  }
  PTR_PTR_10023194 = (undefined *)piVar1;
  FUN_10019d10(DAT_10023760);
  FUN_10015a50((undefined *)DAT_10023760);
  DAT_10023760 = piVar1;
  return 0;
}


