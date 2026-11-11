
/* ==== AfxMessageBox @ 004b455b ==== 
 * signature: int __stdcall AfxMessageBox(char * param_1, uint param_2, uint param_3)
 * body: 004b455b-004b4579
 * note: Library Function - Single Match  int __stdcall AfxMessageBox(char const *,unsigned int,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxMessageBox(char const *,unsigned int,unsigned int)
   
   Library: Visual Studio 1998 Release */

int AfxMessageBox(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_004bafca();
  iVar1 = (**(code **)(**(int **)(iVar1 + 4) + 0x90))(param_1,param_2,param_3);
  return iVar1;
}


