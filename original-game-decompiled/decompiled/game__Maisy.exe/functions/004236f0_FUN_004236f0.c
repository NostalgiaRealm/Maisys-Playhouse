
/* ==== FUN_004236f0 @ 004236f0 ==== 
 * signature: undefined4 * __fastcall FUN_004236f0(int * param_1)
 * body: 004236f0-00423761
 */

undefined4 * __fastcall FUN_004236f0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00423762;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = FUN_00412c20(0x56);
  puVar2 = (undefined4 *)0x0;
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00422bd0(puVar1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*param_1 + 300))(FUN_00423780,puVar2);
  *unaff_FS_OFFSET = local_10;
  return puVar2;
}


