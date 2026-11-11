
/* ==== CString::~CString @ 004abc9d ==== 
 * signature: void __thiscall ~CString(CString * this)
 * body: 004abc9d-004abccc
 * note: Library Function - Single Match  public: __thiscall CString::~CString(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CString::~CString(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CString::~CString(CString *this)

{
  LONG LVar1;
  
  if (*(int *)this - (int)PTR_DAT_004dd700 != 0xc) {
    LVar1 = InterlockedDecrement((LONG *)(*(int *)this + -0xc));
    if (LVar1 < 1) {
      FUN_004a602d((LPVOID)(*(int *)this + -0xc));
    }
  }
  return;
}


