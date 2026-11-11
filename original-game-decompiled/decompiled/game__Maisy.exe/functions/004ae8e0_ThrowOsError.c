
/* ==== CFileException::ThrowOsError @ 004ae8e0 ==== 
 * signature: void __stdcall ThrowOsError(long param_1, char * param_2)
 * body: 004ae8e0-004ae8fb
 * note: Library Function - Single Match  public: static void __stdcall CFileException::ThrowOsError(long,char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static void __stdcall CFileException::ThrowOsError(long,char const *)
   
   Library: Visual Studio 1998 Release */

void CFileException::ThrowOsError(long param_1,char *param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = OsErrorToException(param_1);
    AfxThrowFileException(iVar1,param_1,param_2);
  }
  return;
}


