
/* ==== CDocManager::~CDocManager @ 004bd575 ==== 
 * signature: void __thiscall ~CDocManager(CDocManager * this)
 * body: 004bd575-004bd5f1
 * note: Library Function - Single Match  public: virtual __thiscall CDocManager::~CDocManager(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall CDocManager::~CDocManager(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDocManager::~CDocManager(CDocManager *this)

{
  int iVar1;
  __POSITION *p_Var2;
  int *piVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cd45c;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar1 = extraout_ECX[2];
  *(int *)(unaff_EBP + -0x10) = iVar1;
  while (iVar1 != 0) {
    p_Var2 = *(__POSITION **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)p_Var2;
    piVar3 = *(int **)(p_Var2 + 8);
    if ((piVar3[7] != 0) &&
       (CPtrList::RemoveAt((CPtrList *)(*(int *)(unaff_EBP + -0x14) + 4),p_Var2),
       piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 4))(1);
    }
    iVar1 = *(int *)(unaff_EBP + -0x10);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004bd5f2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bd607();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


