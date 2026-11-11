
/* ==== FUN_0045f590 @ 0045f590 ==== 
 * signature: undefined __fastcall FUN_0045f590(int param_1)
 * body: 0045f590-0045f609
 */

void __fastcall FUN_0045f590(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_24 [16];
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045f616;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd0;
  piVar3 = (int *)0x0;
  puVar1 = &stack0xffffffd0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    piVar3 = (int *)FUN_00410600(*(int *)(param_1 + 0xc4));
    puVar1 = local_14;
  }
  local_14 = puVar1;
  if (piVar3 != (int *)0x0) {
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_24);
    local_8 = 1;
    iVar2 = (**(code **)(*piVar3 + 0x10))();
    if (iVar2 != 0) {
      FUN_0045a200(iVar2);
    }
    local_8 = 0xffffffff;
    FUN_0045f620();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


