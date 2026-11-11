
/* ==== FUN_0046e590 @ 0046e590 ==== 
 * signature: undefined __fastcall FUN_0046e590(void * param_1)
 * body: 0046e590-0046e626;0046e62f-0046e74b
 */

void __fastcall FUN_0046e590(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_30 [4];
  undefined1 local_2c [20];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0046e773;
  *unaff_FS_OFFSET = &local_10;
  local_18 = (undefined4 *)FUN_004a5fed(0xe);
  DAT_004e1c1c = (undefined4 *)0x0;
  if (local_18 != (undefined4 *)0x0) {
    *local_18 = &PTR_FUN_004be070;
    DAT_004e1c1c = local_18;
  }
  local_8 = 0xffffffff;
  FUN_00430500(DAT_004e1c1c,0);
  FUN_00466640(param_1);
  puVar1 = FUN_00412c20(0x68);
  local_8 = 1;
  local_14 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00412c90(puVar1,0);
    *puVar1 = &PTR_FUN_004c9270;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)param_1 + 0x52) = puVar1;
  FUN_0044cce0(puVar1,0);
  local_18 = (undefined4 *)FUN_004a5fed(0xe);
  puVar1 = (undefined4 *)0x0;
  if (local_18 != (undefined4 *)0x0) {
    *local_18 = &PTR_FUN_004be070;
    puVar1 = local_18;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)param_1 + 0x56) = puVar1;
  FUN_00430500(puVar1,0);
  local_14 = FUN_00412c20(0x4a);
  local_8 = 4;
  puVar1 = (undefined4 *)0x0;
  if (local_14 != (undefined4 *)0x0) {
    puVar1 = FUN_00430a50(local_14,0x16,0x10,'\0',0);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)param_1 + 0x5a) = puVar1;
  FUN_00411690((void *)((int)param_1 + 0x5e),(int)local_30,(int)local_2c,0x16);
  FUN_00411690((void *)((int)param_1 + 0x6e),(int)local_30,(int)local_2c,0x16);
  FUN_00411690((void *)((int)param_1 + 0x7e),(int)local_30,(int)local_2c,0x16);
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x9a) = 0;
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  piVar2 = FUN_0041bd90(0x23,0xffffffff,0);
  *(int **)((int)param_1 + 0x92) = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x38))(param_1);
  }
  *(undefined2 *)((int)param_1 + 0xaa) = 0;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined1 *)((int)param_1 + 0xac) = 0;
  *(undefined4 *)((int)param_1 + 0xae) = 0;
  *unaff_FS_OFFSET = local_10;
  return;
}


