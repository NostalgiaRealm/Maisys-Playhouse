
/* ==== FUN_00451e10 @ 00451e10 ==== 
 * signature: undefined __fastcall FUN_00451e10(undefined4 * param_1)
 * body: 00451e10-00451ea4
 */

void __fastcall FUN_00451e10(undefined4 *param_1)

{
  LPVOID pvVar1;
  short sVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00451ea5;
  *param_1 = &PTR_FUN_004c8ad0;
  *unaff_FS_OFFSET = &local_10;
  sVar2 = 0;
  local_8 = 0;
  if (((*(short *)(param_1 + 10) != 0) && (param_1[0xb] != 0)) && (0 < *(short *)(param_1 + 10))) {
    do {
      pvVar1 = *(LPVOID *)(sVar2 * 0x110 + param_1[0xb]);
      if (pvVar1 != (LPVOID)0x0) {
        FUN_00434950(pvVar1);
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 < *(short *)(param_1 + 10));
  }
  if ((LPVOID)param_1[0xb] != (LPVOID)0x0) {
    FUN_00434950((LPVOID)param_1[0xb]);
  }
  local_8 = 0xffffffff;
  FUN_00451eaf();
  *unaff_FS_OFFSET = local_10;
  return;
}


