
/* ==== CString::MakeReverse @ 004ac2ce ==== 
 * signature: void __thiscall MakeReverse(CString * this)
 * body: 004ac2ce-004ac2e1
 * note: Library Function - Single Match  public: void __thiscall CString::MakeReverse(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CString::MakeReverse(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CString::MakeReverse(CString *this)

{
  CopyBeforeWrite(this);
  __mbsrev(*(uchar **)this);
  return;
}


