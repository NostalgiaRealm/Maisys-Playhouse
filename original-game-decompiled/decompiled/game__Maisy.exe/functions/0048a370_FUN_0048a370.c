
/* ==== FUN_0048a370 @ 0048a370 ==== 
 * signature: undefined __fastcall FUN_0048a370(undefined4 * param_1)
 * body: 0048a370-0048a3e5
 */

void __fastcall FUN_0048a370(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0048a3e6;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_FUN_004cab40;
  local_8 = 0;
  iVar2 = *(int *)((int)param_1 + 0x26);
  iVar1 = FUN_00430190((int)param_1);
  if (0 < iVar2) {
    piVar3 = (int *)(iVar1 + 0x12);
    do {
      if ((int *)*piVar3 != (int *)0x0) {
        (**(code **)(*(int *)*piVar3 + 4))();
        *piVar3 = 0;
      }
      piVar3 = (int *)((int)piVar3 + 0x1a);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004301f0((int)param_1);
  local_8 = 0xffffffff;
  FUN_0048a3f0();
  *unaff_FS_OFFSET = local_10;
  return;
}


