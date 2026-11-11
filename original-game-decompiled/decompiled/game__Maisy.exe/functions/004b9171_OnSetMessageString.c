
/* ==== CFrameWnd::OnSetMessageString @ 004b9171 ==== 
 * signature: long __thiscall OnSetMessageString(CFrameWnd * this, uint param_1, long param_2)
 * body: 004b9171-004b924a
 * note: Library Function - Single Match  protected: long __thiscall CFrameWnd::OnSetMessageString(unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: long __thiscall CFrameWnd::OnSetMessageString(unsigned int,long)
   
   Library: Visual Studio 1998 Release */

long __thiscall CFrameWnd::OnSetMessageString(CFrameWnd *this,uint param_1,long param_2)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  CWnd *this_00;
  CFrameWnd *pCVar6;
  int extraout_ECX;
  char *pcVar7;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  piVar2 = *(int **)(unaff_EBP + -0x10);
  uVar3 = *(undefined4 *)(extraout_ECX + 0x94);
  *(undefined4 **)(unaff_EBP + -0x18) = (undefined4 *)(extraout_ECX + 0x94);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
  pbVar1 = (byte *)(piVar2 + 9);
  *pbVar1 = *pbVar1 & 0xbf;
  iVar4 = *piVar2;
  this_00 = (CWnd *)(**(code **)(iVar4 + 0xd8))();
  if (this_00 != (CWnd *)0x0) {
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x14));
    pcVar7 = *(char **)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((pcVar7 == (char *)0x0) && (pcVar7 = (char *)0x0, *(int *)(unaff_EBP + 8) != 0)) {
      if ((*(int *)(unaff_EBP + 8) == 0xef06) && (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x9c) != 0)
         ) {
        *(undefined4 *)(unaff_EBP + 8) = 0xf005;
      }
      (**(code **)(iVar4 + 200))(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x14);
      pcVar7 = *(char **)(unaff_EBP + -0x14);
    }
    CWnd::SetWindowTextA(this_00,pcVar7);
    pCVar6 = CWnd::GetParentFrame(this_00);
    if (pCVar6 != (CFrameWnd *)0x0) {
      uVar3 = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(pCVar6 + 0x94) = uVar3;
      *(undefined4 *)(pCVar6 + 0x90) = uVar3;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004b9255();
  }
  uVar3 = *(undefined4 *)(unaff_EBP + 8);
  **(undefined4 **)(unaff_EBP + -0x18) = uVar3;
  *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x90) = uVar3;
  lVar5 = *(long *)(unaff_EBP + -0x1c);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return lVar5;
}


