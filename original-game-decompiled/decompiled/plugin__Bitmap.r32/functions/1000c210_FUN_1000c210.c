
/* ==== FUN_1000c210 @ 1000c210 ==== 
 * signature: undefined4 __stdcall FUN_1000c210(void)
 * body: 1000c210-1000c2bd
 */

undefined4 FUN_1000c210(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_10016fbc == 0) {
    PTR_PTR_10016434 = (undefined *)&PTR_DAT_10016388;
    FUN_1000c640(DAT_10017250);
    FUN_1000bff0((undefined *)DAT_10017250);
    DAT_10017250 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_1000d550(1,0xac);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = FUN_1000c2c0((char *)piVar1);
  if (uVar2 != 0) {
    FUN_1000c640(piVar1);
    FUN_1000bff0((undefined *)piVar1);
    return 1;
  }
  PTR_PTR_10016434 = (undefined *)piVar1;
  FUN_1000c640(DAT_10017250);
  FUN_1000bff0((undefined *)DAT_10017250);
  DAT_10017250 = piVar1;
  return 0;
}


