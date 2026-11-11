
/* ==== FUN_1102f250 @ 1102f250 ==== 
 * signature: undefined4 __stdcall FUN_1102f250(void)
 * body: 1102f250-1102f33e
 */

undefined4 FUN_1102f250(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (DAT_11036c84 == 0) {
    PTR_DAT_11037b20 = *(undefined **)PTR_PTR_11037b50;
    PTR_DAT_11037b24 = *(undefined **)(PTR_PTR_11037b50 + 4);
    PTR_DAT_11037b28 = *(undefined **)(PTR_PTR_11037b50 + 8);
    PTR_PTR_11037b50 = (undefined *)&PTR_DAT_11037b20;
    FUN_1102f4e0((int)DAT_11037230);
    FUN_11029180(DAT_11037230);
    DAT_11037230 = (undefined4 *)0x0;
    return 0;
  }
  puVar1 = FUN_110291a0(1,0x30);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  uVar2 = FUN_1102f340((int)puVar1);
  if (uVar2 != 0) {
    FUN_1102f4e0((int)puVar1);
    FUN_11029180(puVar1);
    return 1;
  }
  *puVar1 = *(undefined4 *)PTR_PTR_11037b50;
  puVar1[1] = *(undefined4 *)(PTR_PTR_11037b50 + 4);
  puVar1[2] = *(undefined4 *)(PTR_PTR_11037b50 + 8);
  PTR_PTR_11037b50 = (undefined *)puVar1;
  FUN_1102f4e0((int)DAT_11037230);
  FUN_11029180(DAT_11037230);
  DAT_11037230 = puVar1;
  return 0;
}


