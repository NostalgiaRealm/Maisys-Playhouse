
/* ==== CString::CString @ 004abb54 ==== 
 * signature: undefined __thiscall CString(CString * this, CString * param_1)
 * body: 004abb54-004abb89
 * note: Library Function - Single Match  public: __thiscall CString::CString(class CString const &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CString::CString(class CString const &)
   
   Library: Visual Studio 1998 Release */

CString * __thiscall CString::CString(CString *this,CString *param_1)

{
  LONG *lpAddend;
  undefined **ppuVar1;
  
  lpAddend = (LONG *)(*(int *)param_1 + -0xc);
  if (*lpAddend < 0) {
    ppuVar1 = FUN_004abb3e();
    *(undefined **)this = *ppuVar1;
    operator=(this,*(char **)param_1);
  }
  else {
    *(int *)this = *(int *)param_1;
    InterlockedIncrement(lpAddend);
  }
  return this;
}


