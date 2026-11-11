
/* ==== CString::ReleaseBuffer @ 004ac1bf ==== 
 * signature: void __thiscall ReleaseBuffer(CString * this, int param_1)
 * body: 004ac1bf-004ac1e6
 * note: Library Function - Single Match  public: void __thiscall CString::ReleaseBuffer(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CString::ReleaseBuffer(int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CString::ReleaseBuffer(CString *this,int param_1)

{
  CopyBeforeWrite(this);
  if (param_1 == -1) {
    param_1 = lstrlenA(*(LPCSTR *)this);
  }
  *(int *)(*(int *)this + -8) = param_1;
  *(undefined1 *)(*(int *)this + param_1) = 0;
  return;
}


