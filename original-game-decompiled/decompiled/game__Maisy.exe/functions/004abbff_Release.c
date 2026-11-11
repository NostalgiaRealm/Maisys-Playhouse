
/* ==== CString::Release @ 004abbff ==== 
 * signature: void __stdcall Release(CStringData * param_1)
 * body: 004abbff-004abc23
 * note: Library Function - Single Match  protected: static void __stdcall CString::Release(struct CStringData *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: static void __stdcall CString::Release(struct CStringData *)
   
   Library: Visual Studio 1998 Release */

void CString::Release(CStringData *param_1)

{
  LONG LVar1;
  
  if (param_1 != (CStringData *)PTR_DAT_004dd700) {
    LVar1 = InterlockedDecrement((LONG *)param_1);
    if (LVar1 < 1) {
      FUN_004a602d(param_1);
    }
  }
  return;
}


