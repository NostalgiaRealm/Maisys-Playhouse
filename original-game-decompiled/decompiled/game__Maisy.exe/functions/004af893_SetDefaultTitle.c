
/* ==== CMultiDocTemplate::SetDefaultTitle @ 004af893 ==== 
 * signature: void __thiscall SetDefaultTitle(CMultiDocTemplate * this, CDocument * param_1)
 * body: 004af893-004af926
 * note: Library Function - Single Match  public: virtual void __thiscall CMultiDocTemplate::SetDefaultTitle(class CDocument *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CMultiDocTemplate::SetDefaultTitle(class CDocument *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CMultiDocTemplate::SetDefaultTitle(CMultiDocTemplate *this,CDocument *param_1)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = (**(code **)(*extraout_ECX + 0x68))(unaff_EBP + -0x10,1);
  if ((iVar1 == 0) || (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) == 0)) {
    CString::LoadStringA((CString *)(unaff_EBP + -0x10),0xf003);
  }
  else {
    wsprintfA((LPSTR)(unaff_EBP + -0x18),&DAT_004db558,extraout_ECX[0x22] + 1);
    CString::operator+=((CString *)(unaff_EBP + -0x10),(char *)(unaff_EBP + -0x18));
  }
  (**(code **)(**(int **)(unaff_EBP + 8) + 0x54))(*(undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004af931();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


