
/* ==== AfxMessageBox @ 004b457a ==== 
 * signature: int __stdcall AfxMessageBox(uint param_1, uint param_2, uint param_3)
 * body: 004b457a-004b45e6
 * note: Library Function - Single Match  int __stdcall AfxMessageBox(unsigned int,unsigned int,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxMessageBox(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 1998 Release */

int AfxMessageBox(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CString::LoadStringA((CString *)(unaff_EBP + -0x10),*(uint *)(unaff_EBP + 8));
  iVar3 = *(int *)(unaff_EBP + 0x10);
  if (iVar3 == -1) {
    iVar3 = *(int *)(unaff_EBP + 8);
  }
  iVar1 = FUN_004bafca();
  uVar2 = (**(code **)(**(int **)(iVar1 + 4) + 0x90))
                    (*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 0xc),iVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  FUN_004b45f1();
  iVar3 = *(int *)(unaff_EBP + -0x14);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return iVar3;
}


