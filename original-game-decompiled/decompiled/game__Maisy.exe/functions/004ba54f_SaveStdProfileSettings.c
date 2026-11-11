
/* ==== CWinApp::SaveStdProfileSettings @ 004ba54f ==== 
 * signature: void __thiscall SaveStdProfileSettings(CWinApp * this)
 * body: 004ba54f-004ba58a
 * note: Library Function - Single Match  protected: void __thiscall CWinApp::SaveStdProfileSettings(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CWinApp::SaveStdProfileSettings(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWinApp::SaveStdProfileSettings(CWinApp *this)

{
  int iVar1;
  
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 0x10))();
  }
  if (*(int *)(this + 0xac) != 0) {
    iVar1 = FUN_004bafca();
    WriteProfileInt(this,"Settings","PreviewPages",*(int *)(*(int *)(iVar1 + 4) + 0xac));
  }
  return;
}


