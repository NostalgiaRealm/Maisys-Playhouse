
/* ==== FUN_00489940 @ 00489940 ==== 
 * signature: undefined __thiscall FUN_00489940(void * this, int param_1, undefined4 param_2, uint param_3)
 * body: 00489940-00489a3d
 */

void __thiscall FUN_00489940(void *this,int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined2 local_3c [6];
  AFX_EXCEPTION_LINK local_30 [28];
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00489a4a;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffb8;
  if (DAT_004dc57c == '\0') {
    iVar1 = (**(code **)(*(int *)this + 0x130))();
    FUN_004a8882(this);
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0x50) != 0)) &&
       (*(int *)(*(int *)(iVar1 + 0x50) + 0x82) != 0)) {
      FUN_00488fa0(param_1,param_3,local_3c);
      AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_30);
      local_8 = 1;
      iVar2 = FUN_00409610(*(int *)(*(int *)(iVar1 + 0x50) + 0x82));
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00409610(*(int *)(*(int *)(iVar1 + 0x50) + 0x82));
        (**(code **)(*piVar3 + 0x294))(local_3c);
      }
      iVar2 = FUN_00409600(*(int *)(*(int *)(iVar1 + 0x50) + 0x82));
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00409600(*(int *)(*(int *)(iVar1 + 0x50) + 0x82));
        (**(code **)(*piVar3 + 0x294))(local_3c);
      }
      local_8 = 0xffffffff;
      FUN_00489a54();
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


