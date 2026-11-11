
/* ==== CString::operator= @ 004abdfa ==== 
 * signature: CString * __thiscall operator=(CString * this, CString * param_1)
 * body: 004abdfa-004abe49
 * note: Library Function - Single Match  public: class CString const & __thiscall CString::operator=(class CString const &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString const & __thiscall CString::operator=(class CString const &)
   
   Library: Visual Studio 1998 Release */

CString * __thiscall CString::operator=(CString *this,CString *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar1 = *(char **)this;
  pcVar2 = *(char **)param_1;
  if (pcVar1 != pcVar2) {
    if (((*(int *)(pcVar1 + -0xc) < 0) && ((int)pcVar1 - (int)PTR_DAT_004dd700 != 0xc)) ||
       (*(int *)(pcVar2 + -0xc) < 0)) {
      AssignCopy(this,*(int *)(pcVar2 + -8),pcVar2);
    }
    else {
      Release(this);
      iVar3 = *(int *)param_1;
      *(int *)this = iVar3;
      InterlockedIncrement((LONG *)(iVar3 + -0xc));
    }
  }
  return this;
}


