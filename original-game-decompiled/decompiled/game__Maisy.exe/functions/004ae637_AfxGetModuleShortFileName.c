
/* ==== AfxGetModuleShortFileName @ 004ae637 ==== 
 * signature: void __stdcall AfxGetModuleShortFileName(HINSTANCE__ * param_1, CString * param_2)
 * body: 004ae637-004ae692
 * note: Library Function - Single Match  void __stdcall AfxGetModuleShortFileName(struct HINSTANCE__ *,class CString &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall AfxGetModuleShortFileName(struct HINSTANCE__ *,class CString &)
   
   Library: Visual Studio 1998 Release */

void AfxGetModuleShortFileName(HINSTANCE__ *param_1,CString *param_2)

{
  LPSTR lpszShortPath;
  DWORD DVar1;
  CHAR local_108 [260];
  
  GetModuleFileNameA(param_1,local_108,0x104);
  DVar1 = 0x104;
  lpszShortPath = (LPSTR)FUN_004ac16a(param_2,0x104);
  DVar1 = GetShortPathNameA(local_108,lpszShortPath,DVar1);
  if (DVar1 == 0) {
    CString::operator=(param_2,local_108);
  }
  CString::ReleaseBuffer(param_2,-1);
  return;
}


