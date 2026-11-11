
/* ==== FUN_1001a250 @ 1001a250 ==== 
 * signature: undefined4 __stdcall FUN_1001a250(void)
 * body: 1001a250-1001a33e
 */

undefined4 FUN_1001a250(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_100233fc == 0) {
    PTR_DAT_100231a0 = *(undefined **)PTR_PTR_100231d0;
    PTR_DAT_100231a4 = *(undefined **)(PTR_PTR_100231d0 + 4);
    PTR_DAT_100231a8 = *(undefined **)(PTR_PTR_100231d0 + 8);
    PTR_PTR_100231d0 = (undefined *)&PTR_DAT_100231a0;
    FUN_1001a4d0((int)DAT_10023770);
    FUN_10015a50((undefined *)DAT_10023770);
    DAT_10023770 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_10019830(1,0x30);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = FUN_1001a340((int)piVar1);
  if (uVar2 != 0) {
    FUN_1001a4d0((int)piVar1);
    FUN_10015a50((undefined *)piVar1);
    return 1;
  }
  *piVar1 = *(int *)PTR_PTR_100231d0;
  piVar1[1] = *(int *)(PTR_PTR_100231d0 + 4);
  piVar1[2] = *(int *)(PTR_PTR_100231d0 + 8);
  PTR_PTR_100231d0 = (undefined *)piVar1;
  FUN_1001a4d0((int)DAT_10023770);
  FUN_10015a50((undefined *)DAT_10023770);
  DAT_10023770 = piVar1;
  return 0;
}


