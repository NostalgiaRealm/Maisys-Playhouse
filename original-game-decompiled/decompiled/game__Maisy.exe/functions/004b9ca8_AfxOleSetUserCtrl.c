
/* ==== AfxOleSetUserCtrl @ 004b9ca8 ==== 
 * signature: void __stdcall AfxOleSetUserCtrl(int param_1)
 * body: 004b9ca8-004b9cb6
 * note: Library Function - Single Match  void __stdcall AfxOleSetUserCtrl(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall AfxOleSetUserCtrl(int)
   
   Library: Visual Studio 1998 Release */

void AfxOleSetUserCtrl(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004bafca();
  *(int *)(iVar1 + 0x30) = param_1;
  return;
}


