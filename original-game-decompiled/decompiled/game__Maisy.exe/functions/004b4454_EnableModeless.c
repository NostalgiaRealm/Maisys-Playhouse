
/* ==== CWinApp::EnableModeless @ 004b4454 ==== 
 * signature: void __thiscall EnableModeless(CWinApp * this, int param_1)
 * body: 004b4454-004b4496
 * note: Library Function - Single Match  public: void __thiscall CWinApp::EnableModeless(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CWinApp::EnableModeless(int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWinApp::EnableModeless(CWinApp *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_004a7052();
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004a7052();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x78))();
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0xb4))();
    if ((iVar1 != 0) && ((int *)piVar2[0x1a] != (int *)0x0)) {
      (**(code **)(*(int *)piVar2[0x1a] + 0x68))(param_1);
    }
  }
  return;
}


