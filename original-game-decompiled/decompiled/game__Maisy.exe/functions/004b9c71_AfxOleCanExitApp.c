
/* ==== AfxOleCanExitApp @ 004b9c71 ==== 
 * signature: int __stdcall AfxOleCanExitApp(void)
 * body: 004b9c71-004b9c7e
 * note: Library Function - Single Match  int __stdcall AfxOleCanExitApp(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxOleCanExitApp(void)
   
   Library: Visual Studio 1998 Release */

int AfxOleCanExitApp(void)

{
  int iVar1;
  
  iVar1 = FUN_004bafca();
  return (uint)(*(int *)(iVar1 + 0x2c) == 0);
}


