
/* ==== CTime::FormatGmt @ 004a5334 ==== 
 * signature: CString __thiscall FormatGmt(CTime * this, char * param_1)
 * body: 004a5334-004a53a2
 * note: Library Function - Single Match  public: class CString __thiscall CTime::FormatGmt(char const *)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString __thiscall CTime::FormatGmt(char const *)const 
   
   Library: Visual Studio 1998 Release */

undefined4 __thiscall CTime::FormatGmt(CTime *this,char *param_1)

{
  undefined4 uVar1;
  tm *ptVar2;
  int iVar3;
  time_t *_Time;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  ptVar2 = _gmtime(_Time);
  if (ptVar2 != (tm *)0x0) {
    iVar3 = FUN_00490d10((byte *)(unaff_EBP + -0x90),0x80,*(byte **)(unaff_EBP + 0xc),
                         &ptVar2->tm_sec);
    if (iVar3 != 0) goto LAB_004a537c;
  }
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
LAB_004a537c:
  CString::CString(*(CString **)(unaff_EBP + 8),(char *)(unaff_EBP + -0x90));
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(byte *)(unaff_EBP + -0x10) = *(byte *)(unaff_EBP + -0x10) | 1;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


