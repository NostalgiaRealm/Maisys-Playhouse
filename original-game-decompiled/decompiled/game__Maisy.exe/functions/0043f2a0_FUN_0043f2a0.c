
/* ==== FUN_0043f2a0 @ 0043f2a0 ==== 
 * signature: undefined4 __fastcall FUN_0043f2a0(CWnd * param_1)
 * body: 0043f2a0-0043f30f
 */

undefined4 __fastcall FUN_0043f2a0(CWnd *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_FS_OFFSET;
  CString local_14 [4];
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043f310;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_004a8882((int *)param_1);
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_004bafca();
    puVar3 = (undefined4 *)CString::CString(local_14,*(char **)(iVar1 + 0x10));
    local_8 = 0;
    CWnd::SetWindowTextA(param_1,(char *)*puVar3);
    local_8 = 0xffffffff;
    FUN_0043f31a();
    uVar2 = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}


