
/* ==== wcsncnt @ 14022350 ==== 
 * signature: int __cdecl wcsncnt(short * param_1, int param_2)
 * body: 14022350-14022380
 * note: Library Function - Single Match  _wcsncnt  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _wcsncnt
   
   Library: Visual Studio 1998 Release */

int __cdecl wcsncnt(short *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = param_2;
  for (psVar2 = param_1; (iVar1 != 0 && (*psVar2 != 0)); psVar2 = psVar2 + 1) {
    iVar1 = iVar1 + -1;
  }
  if ((iVar1 != 0) && (*psVar2 == 0)) {
    param_2 = ((int)psVar2 - (int)param_1 >> 1) + 1;
  }
  return param_2;
}


