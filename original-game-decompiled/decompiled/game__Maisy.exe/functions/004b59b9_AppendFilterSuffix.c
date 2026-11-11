
/* ==== AppendFilterSuffix @ 004b59b9 ==== 
 * signature: void __cdecl AppendFilterSuffix(CString * param_1, tagOFNA * param_2, CDocTemplate * param_3, CString * param_4)
 * body: 004b59b9-004b5a98
 * note: Library Function - Single Match  void __cdecl AppendFilterSuffix(class CString &,struct tagOFNA &,class CDocTemplate *,class CString *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __cdecl AppendFilterSuffix(class CString &,struct tagOFNA &,class CDocTemplate *,class
   CString *)
   
   Library: Visual Studio 1998 Release */

void __cdecl
AppendFilterSuffix(CString *param_1,tagOFNA *param_2,CDocTemplate *param_3,CString *param_4)

{
  code *pcVar1;
  CString *pCVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x14));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  pcVar1 = *(code **)(**(int **)(unaff_EBP + 0x10) + 0x68);
  iVar3 = (*pcVar1)(unaff_EBP + -0x10,4);
  if ((iVar3 != 0) && (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) != 0)) {
    iVar3 = (*pcVar1)(unaff_EBP + -0x14,3);
    if ((iVar3 != 0) && (*(int *)(*(int *)(unaff_EBP + -0x14) + -8) != 0)) {
      pCVar2 = *(CString **)(unaff_EBP + 0x14);
      if (pCVar2 == (CString *)0x0) {
        iVar3 = *(int *)(unaff_EBP + 0xc);
      }
      else {
        CString::operator=(pCVar2,(char *)(*(int *)(unaff_EBP + -0x10) + 1));
        iVar3 = *(int *)(unaff_EBP + 0xc);
        *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)pCVar2;
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + 1;
      }
      pCVar2 = *(CString **)(unaff_EBP + 8);
      CString::operator+=(pCVar2,(CString *)(unaff_EBP + -0x14));
      CString::operator+=(pCVar2,'\0');
      CString::operator+=(pCVar2,'*');
      CString::operator+=(pCVar2,(CString *)(unaff_EBP + -0x10));
      CString::operator+=(pCVar2,'\0');
      *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004b5a99();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b5aab();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


