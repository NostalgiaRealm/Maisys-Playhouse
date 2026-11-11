
/* ==== RegisterWithIcon @ 004aba3d ==== 
 * signature: int __stdcall RegisterWithIcon(tagWNDCLASSA * param_1, char * param_2, uint param_3)
 * body: 004aba3d-004aba80
 * note: Library Function - Single Match  int __stdcall RegisterWithIcon(struct tagWNDCLASSA *,char const *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall RegisterWithIcon(struct tagWNDCLASSA *,char const *,unsigned int)
   
   Library: Visual Studio 1998 Release */

int RegisterWithIcon(tagWNDCLASSA *param_1,char *param_2,uint param_3)

{
  int iVar1;
  HICON pHVar2;
  
  param_1->lpszClassName = param_2;
  iVar1 = FUN_004bafca();
  pHVar2 = LoadIconA(*(HINSTANCE *)(iVar1 + 0xc),(LPCSTR)(param_3 & 0xffff));
  param_1->hIcon = pHVar2;
  if (pHVar2 == (HICON)0x0) {
    pHVar2 = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    param_1->hIcon = pHVar2;
  }
  iVar1 = AfxRegisterClass(param_1);
  return iVar1;
}


