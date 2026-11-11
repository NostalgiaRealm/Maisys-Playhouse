
/* ==== CString::Release @ 004abbc6 ==== 
 * signature: void __thiscall Release(CString * this)
 * body: 004abbc6-004abbfe
 * note: Library Function - Single Match  protected: void __thiscall CString::Release(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CString::Release(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CString::Release(CString *this)

{
  LONG LVar1;
  undefined **ppuVar2;
  
  if (*(int *)this - (int)PTR_DAT_004dd700 != 0xc) {
    LVar1 = InterlockedDecrement((LONG *)(*(int *)this + -0xc));
    if (LVar1 < 1) {
      FUN_004a602d((LPVOID)(*(int *)this + -0xc));
    }
    ppuVar2 = FUN_004abb3e();
    *(undefined **)this = *ppuVar2;
  }
  return;
}


