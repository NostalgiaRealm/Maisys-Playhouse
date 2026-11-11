
/* ==== CWinApp::DoMessageBox @ 004b4497 ==== 
 * signature: int __thiscall DoMessageBox(CWinApp * this, char * param_1, uint param_2, uint param_3)
 * body: 004b4497-004b455a
 * note: Library Function - Single Match  public: virtual int __thiscall CWinApp::DoMessageBox(char const *,unsigned int,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::DoMessageBox(char const *,unsigned int,unsigned int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWinApp::DoMessageBox(CWinApp *this,char *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  CWnd *this_00;
  CWnd *pCVar2;
  int iVar3;
  uint uVar4;
  HWND hWnd;
  CWnd *pCVar5;
  HWND local_c;
  CWinApp *local_8;
  
  local_8 = this;
  EnableModeless(this,0);
  this_00 = (CWnd *)FUN_004aa4dc(0,&local_c);
  pCVar5 = (CWnd *)(local_8 + 0x94);
  if (this_00 != (CWnd *)0x0) {
    pCVar2 = CWnd::GetTopLevelParent(this_00);
    iVar3 = (**(code **)(*(int *)pCVar2 + 0xb4))();
    if (iVar3 != 0) {
      pCVar5 = pCVar2 + 0x4c;
    }
  }
  uVar1 = *(undefined4 *)pCVar5;
  if (param_3 != 0) {
    *(uint *)pCVar5 = param_3 + 0x30000;
  }
  if (((param_2 & 0xf0) == 0) &&
     ((uVar4 = param_2 & 0xf, uVar4 < 2 || ((2 < uVar4 && (uVar4 < 5)))))) {
    param_2 = param_2 | 0x30;
  }
  AfxGetThreadState();
  hWnd = (HWND)0x0;
  if (this_00 != (CWnd *)0x0) {
    hWnd = *(HWND *)(this_00 + 0x1c);
  }
  iVar3 = MessageBoxA(hWnd,param_1,*(LPCSTR *)(local_8 + 0x70),param_2);
  *(undefined4 *)pCVar5 = uVar1;
  if (local_c != (HWND)0x0) {
    EnableWindow(local_c,1);
  }
  EnableModeless(local_8,1);
  return iVar3;
}


