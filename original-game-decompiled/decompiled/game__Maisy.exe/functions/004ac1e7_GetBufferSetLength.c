
/* ==== CString::GetBufferSetLength @ 004ac1e7 ==== 
 * signature: char * __thiscall GetBufferSetLength(CString * this, int param_1)
 * body: 004ac1e7-004ac206
 * note: Library Function - Single Match  public: char * __thiscall CString::GetBufferSetLength(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: char * __thiscall CString::GetBufferSetLength(int)
   
   Library: Visual Studio 1998 Release */

char * __thiscall CString::GetBufferSetLength(CString *this,int param_1)

{
  FUN_004ac16a(this,param_1);
  *(int *)(*(int *)this + -8) = param_1;
  *(undefined1 *)(*(int *)this + param_1) = 0;
  return *(char **)this;
}


