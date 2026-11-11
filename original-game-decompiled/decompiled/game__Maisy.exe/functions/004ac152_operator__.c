
/* ==== CString::operator+= @ 004ac152 ==== 
 * signature: CString * __thiscall operator+=(CString * this, CString * param_1)
 * body: 004ac152-004ac169
 * note: Library Function - Single Match  public: class CString const & __thiscall CString::operator+=(class CString const &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString const & __thiscall CString::operator+=(class CString const &)
   
   Library: Visual Studio 1998 Release */

CString * __thiscall CString::operator+=(CString *this,CString *param_1)

{
  ConcatInPlace(this,*(int *)(*(char **)param_1 + -8),*(char **)param_1);
  return this;
}


