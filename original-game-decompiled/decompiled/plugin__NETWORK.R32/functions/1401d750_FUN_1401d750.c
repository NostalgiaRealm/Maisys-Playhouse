
/* ==== FUN_1401d750 @ 1401d750 ==== 
 * signature: undefined4 __stdcall FUN_1401d750(void)
 * body: 1401d750-1401d83e
 */

undefined4 FUN_1401d750(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (DAT_140272c4 == 0) {
    PTR_DAT_14028270 = *(undefined **)PTR_PTR_140282a0;
    PTR_DAT_14028274 = *(undefined **)(PTR_PTR_140282a0 + 4);
    PTR_DAT_14028278 = *(undefined **)(PTR_PTR_140282a0 + 8);
    PTR_PTR_140282a0 = (undefined *)&PTR_DAT_14028270;
    FUN_1401d9e0((int)DAT_14027648);
    FUN_1401dd10(DAT_14027648);
    DAT_14027648 = (undefined4 *)0x0;
    return 0;
  }
  puVar1 = FUN_1401e520(1,0x30);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  uVar2 = FUN_1401d840((int)puVar1);
  if (uVar2 != 0) {
    FUN_1401d9e0((int)puVar1);
    FUN_1401dd10(puVar1);
    return 1;
  }
  *puVar1 = *(undefined4 *)PTR_PTR_140282a0;
  puVar1[1] = *(undefined4 *)(PTR_PTR_140282a0 + 4);
  puVar1[2] = *(undefined4 *)(PTR_PTR_140282a0 + 8);
  PTR_PTR_140282a0 = (undefined *)puVar1;
  FUN_1401d9e0((int)DAT_14027648);
  FUN_1401dd10(DAT_14027648);
  DAT_14027648 = puVar1;
  return 0;
}


