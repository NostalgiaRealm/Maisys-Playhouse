
/* ==== _mbstowcsz @ 004ac35a ==== 
 * signature: int __cdecl _mbstowcsz(ushort * param_1, char * param_2, uint param_3)
 * body: 004ac35a-004ac38f
 * note: Library Function - Single Match  int __cdecl _mbstowcsz(unsigned short *,char const *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __cdecl _mbstowcsz(unsigned short *,char const *,unsigned int)
   
   Library: Visual Studio 1998 Release */

int __cdecl _mbstowcsz(ushort *param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 == 0) && (param_1 != (ushort *)0x0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = MultiByteToWideChar(0,0,param_2,-1,(LPWSTR)param_1,param_3);
    if (0 < iVar1) {
      param_1[iVar1 + -1] = 0;
    }
  }
  return iVar1;
}


