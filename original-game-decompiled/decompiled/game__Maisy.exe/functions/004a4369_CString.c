
/* ==== CString::CString @ 004a4369 ==== 
 * signature: undefined __thiscall CString(CString * this, char * param_1, int param_2)
 * body: 004a4369-004a439b
 * note: Library Function - Single Match  public: __thiscall CString::CString(char const *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CString::CString(char const *,int)
   
   Library: Visual Studio 1998 Release */

CString * __thiscall CString::CString(CString *this,char *param_1,int param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = FUN_004abb3e();
  *(undefined **)this = *ppuVar1;
  if (param_2 != 0) {
    AllocBuffer(this,param_2);
    FID_conflict__memcpy(*(void **)this,param_1,param_2);
  }
  return this;
}


