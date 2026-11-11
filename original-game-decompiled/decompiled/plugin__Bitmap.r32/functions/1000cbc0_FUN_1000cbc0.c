
/* ==== FUN_1000cbc0 @ 1000cbc0 ==== 
 * signature: undefined4 __stdcall FUN_1000cbc0(void)
 * body: 1000cbc0-1000ccae
 */

undefined4 FUN_1000cbc0(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_10016fb4 == 0) {
    PTR_DAT_10016440 = *(undefined **)PTR_PTR_10016470;
    PTR_DAT_10016444 = *(undefined **)(PTR_PTR_10016470 + 4);
    PTR_DAT_10016448 = *(undefined **)(PTR_PTR_10016470 + 8);
    PTR_PTR_10016470 = (undefined *)&PTR_DAT_10016440;
    FUN_1000ce00((int)DAT_10017260);
    FUN_1000bff0((undefined *)DAT_10017260);
    DAT_10017260 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_1000d550(1,0x30);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = FUN_1000ccb0((int)piVar1);
  if (uVar2 != 0) {
    FUN_1000ce00((int)piVar1);
    FUN_1000bff0((undefined *)piVar1);
    return 1;
  }
  *piVar1 = *(int *)PTR_PTR_10016470;
  piVar1[1] = *(int *)(PTR_PTR_10016470 + 4);
  piVar1[2] = *(int *)(PTR_PTR_10016470 + 8);
  PTR_PTR_10016470 = (undefined *)piVar1;
  FUN_1000ce00((int)DAT_10017260);
  FUN_1000bff0((undefined *)DAT_10017260);
  DAT_10017260 = piVar1;
  return 0;
}


