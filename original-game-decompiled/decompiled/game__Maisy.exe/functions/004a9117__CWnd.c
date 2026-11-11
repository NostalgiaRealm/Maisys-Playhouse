
/* ==== CWnd::~CWnd @ 004a9117 ==== 
 * signature: void __thiscall ~CWnd(CWnd * this)
 * body: 004a9117-004a9199
 * note: Library Function - Single Match  public: virtual __thiscall CWnd::~CWnd(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall CWnd::~CWnd(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::~CWnd(CWnd *this)

{
  int *piVar1;
  int iVar2;
  CWnd *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CWnd **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined ***)extraout_ECX = &PTR_FUN_004cb6c4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((((*(int *)(extraout_ECX + 0x1c) != 0) && (extraout_ECX != (CWnd *)&DAT_004e4e40)) &&
      (extraout_ECX != (CWnd *)&DAT_004e4f00)) &&
     ((extraout_ECX != (CWnd *)&DAT_004e4e80 && (extraout_ECX != (CWnd *)&DAT_004e4ec0)))) {
    FUN_004a92e2(extraout_ECX);
  }
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(1);
  }
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x38);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x24) == *(int *)(unaff_EBP + -0x10))) {
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004a91a4();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


