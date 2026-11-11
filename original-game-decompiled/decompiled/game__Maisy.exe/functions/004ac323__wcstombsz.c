
/* ==== _wcstombsz @ 004ac323 ==== 
 * signature: int __cdecl _wcstombsz(char * param_1, ushort * param_2, uint param_3)
 * body: 004ac323-004ac359
 * note: Library Function - Single Match  int __cdecl _wcstombsz(char *,unsigned short const *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __cdecl _wcstombsz(char *,unsigned short const *,unsigned int)
   
   Library: Visual Studio 1998 Release */

int __cdecl _wcstombsz(char *param_1,ushort *param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 == 0) && (param_1 != (char *)0x0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)param_2,-1,param_1,param_3,(LPCSTR)0x0,(LPBOOL)0x0);
    if (0 < iVar1) {
      param_1[iVar1 + -1] = '\0';
    }
  }
  return iVar1;
}


