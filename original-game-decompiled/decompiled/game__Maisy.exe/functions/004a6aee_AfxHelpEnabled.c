
/* ==== AfxHelpEnabled @ 004a6aee ==== 
 * signature: int __stdcall AfxHelpEnabled(void)
 * body: 004a6aee-004a6b5a
 * note: Library Function - Single Match  int __stdcall AfxHelpEnabled(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxHelpEnabled(void)
   
   Library: Visual Studio 1998 Release */

int AfxHelpEnabled(void)

{
  int iVar1;
  int *piVar2;
  undefined1 local_8 [8];
  
  iVar1 = FUN_004bafca();
  if (*(int *)(iVar1 + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004a7052();
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_004a7052();
      piVar2 = (int *)(**(code **)(*piVar2 + 0x78))();
    }
    if ((piVar2 != (int *)0x0) &&
       (iVar1 = (**(code **)(*piVar2 + 0x14))(0xe146,0,0,local_8), iVar1 != 0)) {
      return 1;
    }
    iVar1 = FUN_004bafca();
    iVar1 = (**(code **)(**(int **)(iVar1 + 4) + 0x14))(0xe146,0,0,local_8);
  }
  return iVar1;
}


