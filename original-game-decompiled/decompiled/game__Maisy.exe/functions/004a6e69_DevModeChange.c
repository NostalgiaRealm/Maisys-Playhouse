
/* ==== CWinApp::DevModeChange @ 004a6e69 ==== 
 * signature: void __thiscall DevModeChange(CWinApp * this, char * param_1)
 * body: 004a6e69-004a6f0d
 * note: Library Function - Single Match  public: void __thiscall CWinApp::DevModeChange(char *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CWinApp::DevModeChange(char *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWinApp::DevModeChange(CWinApp *this,char *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  BOOL BVar3;
  SIZE_T dwBytes;
  HGLOBAL hMem;
  PDEVMODEA pDevModeOutput;
  LONG LVar4;
  CWinApp *pCVar5;
  HANDLE local_8;
  
  if (*(HGLOBAL *)(this + 0x90) != (HGLOBAL)0x0) {
    pvVar1 = GlobalLock(*(HGLOBAL *)(this + 0x90));
    iVar2 = lstrcmpA((LPCSTR)((uint)*(ushort *)((int)pvVar1 + 2) + (int)pvVar1),param_1);
    if (iVar2 == 0) {
      BVar3 = OpenPrinterA(param_1,&local_8,(LPPRINTER_DEFAULTSA)0x0);
      if (BVar3 != 0) {
        pCVar5 = this + 0x8c;
        if (*(HGLOBAL *)pCVar5 != (HGLOBAL)0x0) {
          FUN_004b2f36(*(HGLOBAL *)pCVar5);
        }
        dwBytes = DocumentPropertiesA((HWND)0x0,local_8,param_1,(PDEVMODEA)0x0,(PDEVMODEA)0x0,0);
        hMem = GlobalAlloc(0x42,dwBytes);
        *(HGLOBAL *)pCVar5 = hMem;
        pDevModeOutput = GlobalLock(hMem);
        LVar4 = DocumentPropertiesA((HWND)0x0,local_8,param_1,pDevModeOutput,(PDEVMODEA)0x0,2);
        if (LVar4 != 1) {
          FUN_004b2f36(*(HGLOBAL *)pCVar5);
          *(undefined4 *)pCVar5 = 0;
        }
        ClosePrinter(local_8);
      }
    }
  }
  return;
}


