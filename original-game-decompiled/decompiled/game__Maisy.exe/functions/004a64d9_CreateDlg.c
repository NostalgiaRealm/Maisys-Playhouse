
/* ==== CWnd::CreateDlg @ 004a64d9 ==== 
 * signature: int __thiscall CreateDlg(CWnd * this, char * param_1, CWnd * param_2)
 * body: 004a64d9-004a651c
 * note: Library Function - Single Match  protected: int __thiscall CWnd::CreateDlg(char const *,class CWnd *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: int __thiscall CWnd::CreateDlg(char const *,class CWnd *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::CreateDlg(CWnd *this,char *param_1,CWnd *param_2)

{
  HMODULE hModule;
  int iVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  
  iVar1 = FUN_004bafca();
  hModule = *(HMODULE *)(iVar1 + 0xc);
  hResInfo = FindResourceA(hModule,param_1,&DAT_00000005);
  hResData = LoadResource(hModule,hResInfo);
  if (hResData != (HGLOBAL)0x0) {
    LockResource(hResData);
  }
  iVar1 = FUN_004a652f();
  return iVar1;
}


