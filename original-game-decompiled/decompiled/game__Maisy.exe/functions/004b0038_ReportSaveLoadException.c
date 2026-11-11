
/* ==== CDocument::ReportSaveLoadException @ 004b0038 ==== 
 * signature: void __thiscall ReportSaveLoadException(CDocument * this, char * param_1, CException * param_2, int param_3, uint param_4)
 * body: 004b0038-004b01b1
 * note: Library Function - Single Match  public: virtual void __thiscall CDocument::ReportSaveLoadException(char const *,class CException *,int,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CDocument::ReportSaveLoadException(char const *,class CException
   *,int,unsigned int)
   
   Library: Visual Studio 1998 Release */

void __thiscall
CDocument::ReportSaveLoadException
          (CDocument *this,char *param_1,CException *param_2,int param_3,uint param_4)

{
  CObject *this_00;
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  uint uVar3;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  uVar3 = *(uint *)(unaff_EBP + 0x14);
  *(uint *)(unaff_EBP + -0x14) = uVar3;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this_00 = *(CObject **)(unaff_EBP + 0xc);
  if (this_00 != (CObject *)0x0) {
    iVar1 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CUserException_004dd940);
    if (iVar1 != 0) goto LAB_004b007a;
    iVar1 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CArchiveException_004dde48);
    if (iVar1 == 0) {
      iVar1 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CFileException_004dde10);
      if (iVar1 != 0) {
        if (*(int *)(*(int *)(this_00 + 0x10) + -8) == 0) {
          CString::operator=((CString *)(this_00 + 0x10),*(char **)(unaff_EBP + 8));
        }
        uVar2 = FUN_004ac16a((void *)(unaff_EBP + -0x10),0xff);
        iVar1 = (**(code **)(*(int *)this_00 + 0x14))(uVar2,0x100,unaff_EBP + -0x14);
        if ((iVar1 == 0) && (iVar1 = *(int *)(this_00 + 8), 1 < iVar1)) {
          if (iVar1 < 4) {
            uVar3 = 0xf121;
          }
          else if (iVar1 == 5) {
            uVar3 = 0xf124 - (*(int *)(unaff_EBP + 0x10) == 0);
          }
          else if (((iVar1 != 8) && (iVar1 != 10)) && (iVar1 == 0xd)) {
            uVar3 = 0xf122;
          }
        }
        CString::ReleaseBuffer((CString *)(unaff_EBP + -0x10),-1);
      }
    }
    else {
      iVar1 = *(int *)(this_00 + 8);
      if ((iVar1 == 3) || ((4 < iVar1 && (iVar1 < 8)))) {
        uVar3 = 0xf120;
      }
    }
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) == 0) {
    if (DAT_004e5208 == 0) {
      lstrcpynA((LPSTR)(unaff_EBP + -0x118),*(LPCSTR *)(unaff_EBP + 8),0x104);
    }
    else {
      AfxGetFileTitle(*(char **)(unaff_EBP + 8),(char *)(unaff_EBP + -0x118),0x104);
    }
    AfxFormatString1((CString *)(unaff_EBP + -0x10),uVar3,(char *)(unaff_EBP + -0x118));
  }
  AfxMessageBox(*(char **)(unaff_EBP + -0x10),0x30,*(uint *)(unaff_EBP + -0x14));
LAB_004b007a:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b01bc();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


