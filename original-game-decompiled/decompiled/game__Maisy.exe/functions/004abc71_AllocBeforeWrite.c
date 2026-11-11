
/* ==== CString::AllocBeforeWrite @ 004abc71 ==== 
 * signature: void __thiscall AllocBeforeWrite(CString * this, int param_1)
 * body: 004abc71-004abc9c
 * note: Library Function - Single Match  protected: void __thiscall CString::AllocBeforeWrite(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CString::AllocBeforeWrite(int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CString::AllocBeforeWrite(CString *this,int param_1)

{
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    Release(this);
    AllocBuffer(this,param_1);
  }
  return;
}


