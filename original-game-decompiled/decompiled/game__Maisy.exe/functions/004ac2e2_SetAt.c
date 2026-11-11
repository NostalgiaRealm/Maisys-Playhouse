
/* ==== CString::SetAt @ 004ac2e2 ==== 
 * signature: void __thiscall SetAt(CString * this, int param_1, char param_2)
 * body: 004ac2e2-004ac2fa
 * note: Library Function - Single Match  public: void __thiscall CString::SetAt(int,char)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CString::SetAt(int,char)
   
   Library: Visual Studio 1998 Release */

void __thiscall CString::SetAt(CString *this,int param_1,char param_2)

{
  CopyBeforeWrite(this);
  *(char *)(*(int *)this + param_1) = param_2;
  return;
}


