
/* ==== CWnd::ExecuteDlgInit @ 004ab551 ==== 
 * signature: int __thiscall ExecuteDlgInit(CWnd * this, char * param_1)
 * body: 004ab551-004ab5a1
 * note: Library Function - Single Match  public: int __thiscall CWnd::ExecuteDlgInit(char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::ExecuteDlgInit(char const *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::ExecuteDlgInit(CWnd *this,char *param_1)

{
  HMODULE hModule;
  int iVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar2;
  
  pvVar2 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    iVar1 = FUN_004bafca();
    hModule = *(HMODULE *)(iVar1 + 0xc);
    hResInfo = FindResourceA(hModule,param_1,(LPCSTR)0xf0);
    if (hResInfo != (HRSRC)0x0) {
      hResData = LoadResource(hModule,hResInfo);
      if (hResData == (HGLOBAL)0x0) {
        return 0;
      }
      pvVar2 = LockResource(hResData);
    }
  }
  iVar1 = ExecuteDlgInit(this,pvVar2);
  return iVar1;
}


