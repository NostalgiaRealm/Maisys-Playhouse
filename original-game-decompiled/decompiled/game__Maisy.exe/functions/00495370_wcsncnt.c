
/* ==== wcsncnt @ 00495370 ==== 
 * signature: int __cdecl wcsncnt(short * param_1, int param_2)
 * body: 00495370-004953a2
 * note: Library Function - Single Match  _wcsncnt  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _wcsncnt
   
   Library: Visual Studio 1998 Release */

int __cdecl wcsncnt(short *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*psVar2 == 0) goto LAB_00495399;
    psVar2 = psVar2 + 1;
  }
  if (*psVar2 == 0) {
LAB_00495399:
    param_2 = (int)psVar2 - (int)param_1 >> 1;
  }
  return param_2;
}


