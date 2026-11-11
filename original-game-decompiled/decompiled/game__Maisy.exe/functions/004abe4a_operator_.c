
/* ==== CString::operator= @ 004abe4a ==== 
 * signature: CString * __thiscall operator=(CString * this, char * param_1)
 * body: 004abe4a-004abe71
 * note: Library Function - Single Match  public: class CString const & __thiscall CString::operator=(char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString const & __thiscall CString::operator=(char const *)
   
   Library: Visual Studio 1998 Release */

CString * __thiscall CString::operator=(CString *this,char *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (char *)0x0) {
    iVar1 = lstrlenA(param_1);
  }
  AssignCopy(this,iVar1,param_1);
  return this;
}


