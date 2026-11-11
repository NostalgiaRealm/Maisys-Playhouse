
/* ==== FUN_004afd38 @ 004afd38 ==== 
 * signature: undefined4 __stdcall FUN_004afd38(void)
 * body: 004afd38-004afe40;004afe49-004afe8e;004afe9d-004afecc
 */

undefined4 FUN_004afd38(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd8;
  CString::CString((CString *)(unaff_EBP + -0x18),*(char **)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(*(int *)(unaff_EBP + -0x18) + -8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x24);
    CString::operator=((CString *)(unaff_EBP + -0x18),
                       (CString *)(*(int *)(unaff_EBP + -0x1c) + 0x20));
    if ((*(int *)(unaff_EBP + 0xc) != 0) && (*(int *)(*(int *)(unaff_EBP + -0x18) + -8) == 0)) {
      CString::operator=((CString *)(unaff_EBP + -0x18),
                         (CString *)(*(int *)(unaff_EBP + -0x1c) + 0x1c));
      iVar1 = CString::FindOneOf((CString *)(unaff_EBP + -0x18)," #%;/\\");
      if (iVar1 != -1) {
        CString::ReleaseBuffer((CString *)(unaff_EBP + -0x18),iVar1);
      }
      FUN_004abb44((undefined4 *)(unaff_EBP + -0x20));
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar1 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 0x68))(unaff_EBP + -0x20,4);
      if ((iVar1 != 0) && (*(int *)(*(int *)(unaff_EBP + -0x20) + -8) != 0)) {
        CString::operator+=((CString *)(unaff_EBP + -0x18),(CString *)(unaff_EBP + -0x20));
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004afe41();
    }
    uVar4 = *(undefined4 *)(unaff_EBP + -0x24);
    uVar6 = 0;
    uVar5 = 0x804;
    iVar1 = unaff_EBP + -0x18;
    iVar2 = (-(uint)(*(int *)(unaff_EBP + 0xc) == 0) & 3) + 0xf001;
    iVar3 = FUN_004bafca();
    iVar1 = FUN_004b43aa(*(void **)(iVar3 + 4),iVar1,iVar2,uVar5,uVar6,uVar4);
    if (iVar1 != 0) goto LAB_004afe49;
  }
  else {
LAB_004afe49:
    iVar1 = FUN_004bafca();
    CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(iVar1 + 4));
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar1 = **(int **)(unaff_EBP + -0x1c);
    iVar2 = (**(code **)(iVar1 + 0x7c))(*(undefined4 *)(unaff_EBP + -0x18));
    if (iVar2 != 0) {
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        (**(code **)(iVar1 + 0x58))(*(undefined4 *)(unaff_EBP + -0x18),1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004afecd();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004afedf();
      uVar4 = 1;
      goto LAB_004afe2e;
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 3;
      CFile::Remove(*(char **)(unaff_EBP + -0x18));
      *(undefined4 *)(unaff_EBP + -4) = 2;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004afecd();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004afedf();
  uVar4 = 0;
LAB_004afe2e:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar4;
}


