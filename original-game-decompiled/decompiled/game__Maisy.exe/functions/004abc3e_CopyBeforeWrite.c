
/* ==== CString::CopyBeforeWrite @ 004abc3e ==== 
 * signature: void __thiscall CopyBeforeWrite(CString * this)
 * body: 004abc3e-004abc70
 * note: Library Function - Single Match  protected: void __thiscall CString::CopyBeforeWrite(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CString::CopyBeforeWrite(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CString::CopyBeforeWrite(CString *this)

{
  void *_Src;
  
  _Src = *(void **)this;
  if (1 < *(int *)((int)_Src + -0xc)) {
    Release(this);
    AllocBuffer(this,*(int *)((int)_Src + -8));
    FID_conflict__memcpy(*(void **)this,_Src,*(int *)((int)_Src + -8) + 1);
  }
  return;
}


