
/* ==== FUN_1202f9a0 @ 1202f9a0 ==== 
 * signature: undefined4 __stdcall FUN_1202f9a0(void)
 * body: 1202f9a0-1202fa8e
 */

undefined4 FUN_1202f9a0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (DAT_1203855c == 0) {
    PTR_DAT_12039410 = *(undefined **)PTR_PTR_12039440;
    PTR_DAT_12039414 = *(undefined **)(PTR_PTR_12039440 + 4);
    PTR_DAT_12039418 = *(undefined **)(PTR_PTR_12039440 + 8);
    PTR_PTR_12039440 = (undefined *)&PTR_DAT_12039410;
    FUN_1202fc30((int)DAT_12038b18);
    FUN_1202c7c0(DAT_12038b18);
    DAT_12038b18 = (undefined4 *)0x0;
    return 0;
  }
  puVar1 = FUN_1202c3b0(1,0x30);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  uVar2 = FUN_1202fa90((int)puVar1);
  if (uVar2 != 0) {
    FUN_1202fc30((int)puVar1);
    FUN_1202c7c0(puVar1);
    return 1;
  }
  *puVar1 = *(undefined4 *)PTR_PTR_12039440;
  puVar1[1] = *(undefined4 *)(PTR_PTR_12039440 + 4);
  puVar1[2] = *(undefined4 *)(PTR_PTR_12039440 + 8);
  PTR_PTR_12039440 = (undefined *)puVar1;
  FUN_1202fc30((int)DAT_12038b18);
  FUN_1202c7c0(DAT_12038b18);
  DAT_12038b18 = puVar1;
  return 0;
}


