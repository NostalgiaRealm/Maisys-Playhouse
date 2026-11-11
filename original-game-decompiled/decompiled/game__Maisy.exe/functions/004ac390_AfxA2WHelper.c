
/* ==== AfxA2WHelper @ 004ac390 ==== 
 * signature: ushort * __stdcall AfxA2WHelper(ushort * param_1, char * param_2, int param_3)
 * body: 004ac390-004ac3bb
 * note: Library Function - Single Match  unsigned short * __stdcall AfxA2WHelper(unsigned short *,char const *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    unsigned short * __stdcall AfxA2WHelper(unsigned short *,char const *,int)
   
   Library: Visual Studio 1998 Release */

ushort * AfxA2WHelper(ushort *param_1,char *param_2,int param_3)

{
  if (param_2 == (char *)0x0) {
    param_1 = (ushort *)0x0;
  }
  else {
    *param_1 = 0;
    MultiByteToWideChar(0,0,param_2,-1,(LPWSTR)param_1,param_3);
  }
  return param_1;
}


