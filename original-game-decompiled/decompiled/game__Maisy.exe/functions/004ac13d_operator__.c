
/* ==== CString::operator+= @ 004ac13d ==== 
 * signature: CString * __thiscall operator+=(CString * this, char param_1)
 * body: 004ac13d-004ac151
 * note: Library Function - Single Match  public: class CString const & __thiscall CString::operator+=(char)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString const & __thiscall CString::operator+=(char)
   
   Library: Visual Studio 1998 Release */

CString * __thiscall CString::operator+=(CString *this,char param_1)

{
  ConcatInPlace(this,1,&param_1);
  return this;
}


