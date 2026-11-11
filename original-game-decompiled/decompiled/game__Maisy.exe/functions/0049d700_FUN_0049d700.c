
/* ==== FUN_0049d700 @ 0049d700 ==== 
 * signature: undefined4 __stdcall FUN_0049d700(void)
 * body: 0049d700-0049d7ee
 */

undefined4 FUN_0049d700(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (DAT_004de6a4 == 0) {
    PTR_DAT_004dfc48 = *(undefined **)PTR_PTR_004dfc78;
    PTR_DAT_004dfc4c = *(undefined **)(PTR_PTR_004dfc78 + 4);
    PTR_DAT_004dfc50 = *(undefined **)(PTR_PTR_004dfc78 + 8);
    PTR_PTR_004dfc78 = (undefined *)&PTR_DAT_004dfc48;
    FUN_0049d990((int)DAT_004df3d8);
    FUN_0048e750(DAT_004df3d8);
    DAT_004df3d8 = (undefined4 *)0x0;
    return 0;
  }
  puVar1 = FUN_0048ebf0(1,0x30);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  uVar2 = FUN_0049d7f0((int)puVar1);
  if (uVar2 != 0) {
    FUN_0049d990((int)puVar1);
    FUN_0048e750(puVar1);
    return 1;
  }
  *puVar1 = *(undefined4 *)PTR_PTR_004dfc78;
  puVar1[1] = *(undefined4 *)(PTR_PTR_004dfc78 + 4);
  puVar1[2] = *(undefined4 *)(PTR_PTR_004dfc78 + 8);
  PTR_PTR_004dfc78 = (undefined *)puVar1;
  FUN_0049d990((int)DAT_004df3d8);
  FUN_0048e750(DAT_004df3d8);
  DAT_004df3d8 = puVar1;
  return 0;
}


