
/* ==== FUN_00435240 @ 00435240 ==== 
 * signature: undefined4 * __fastcall FUN_00435240(undefined4 * param_1)
 * body: 00435240-0043533a
 */

undefined4 * __fastcall FUN_00435240(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00435355;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412c90(param_1,0);
  local_8 = 0;
  *param_1 = &PTR_FUN_004c77d8;
  FUN_00412d60(param_1,0);
  *(undefined4 *)((int)param_1 + 0x7236) = 1;
  puVar1 = (undefined4 *)((int)param_1 + 0x26);
  for (iVar3 = 0x1c84; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = FUN_00412c20(0x4a);
  local_8._0_1_ = 1;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004349b0(puVar1,0x2a,0,'\0',0);
  }
  local_8._0_1_ = 0;
  param_1[0x1c93] = puVar2;
  puVar1 = FUN_00412c20(0x4a);
  local_8 = CONCAT31(local_8._1_3_,2);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0042f970(puVar1,0x1c,0,'\0',0,'\0');
  }
  param_1[0x1c94] = puVar2;
  param_1[0x1c90] = 0;
  param_1[0x1c8f] = 0;
  param_1[0x1c92] = 0;
  param_1[0x1c91] = 0;
  param_1[0x1c95] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


