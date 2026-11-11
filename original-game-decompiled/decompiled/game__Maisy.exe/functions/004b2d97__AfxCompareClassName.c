
/* ==== _AfxCompareClassName @ 004b2d97 ==== 
 * signature: int __stdcall _AfxCompareClassName(HWND__ * param_1, char * param_2)
 * body: 004b2d97-004b2dc5
 * note: Library Function - Single Match  int __stdcall _AfxCompareClassName(struct HWND__ *,char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall _AfxCompareClassName(struct HWND__ *,char const *)
   
   Library: Visual Studio 1998 Release */

int _AfxCompareClassName(HWND__ *param_1,char *param_2)

{
  int iVar1;
  CHAR local_24 [32];
  
  GetClassNameA(param_1,local_24,0x20);
  iVar1 = lstrcmpiA(local_24,param_2);
  return (uint)(iVar1 == 0);
}


