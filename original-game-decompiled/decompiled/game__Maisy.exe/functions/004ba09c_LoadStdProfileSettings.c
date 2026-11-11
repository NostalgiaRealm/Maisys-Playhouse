
/* ==== CWinApp::LoadStdProfileSettings @ 004ba09c ==== 
 * signature: void __thiscall LoadStdProfileSettings(CWinApp * this, uint param_1)
 * body: 004ba09c-004ba125
 * note: Library Function - Single Match  protected: void __thiscall CWinApp::LoadStdProfileSettings(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CWinApp::LoadStdProfileSettings(unsigned int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWinApp::LoadStdProfileSettings(CWinApp *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  CWinApp *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  if (*(int *)(unaff_EBP + 8) != 0) {
    iVar1 = FUN_004a5fed(0x20);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = FUN_004ace97();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int **)(this_00 + 0xa0) = piVar2;
    (**(code **)(*piVar2 + 0xc))();
  }
  uVar3 = GetProfileIntA(this_00,"Settings","PreviewPages",0);
  *(uint *)(this_00 + 0xac) = uVar3;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


