
/* ==== __wctomb_lk @ 0049e7b0 ==== 
 * signature: int __cdecl __wctomb_lk(LPSTR param_1, WCHAR param_2)
 * body: 0049e7b0-0049e843
 * note: Library Function - Single Match  __wctomb_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __wctomb_lk
   
   Library: Visual Studio 1998 Release */

int __cdecl __wctomb_lk(LPSTR param_1,WCHAR param_2)

{
  int *piVar1;
  int iVar2;
  BOOL local_4;
  
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_004de6a0 == 0) {
    if (0xff < (ushort)param_2) {
      piVar1 = FUN_0048f9d0();
      *piVar1 = 0x2a;
      return -1;
    }
    *param_1 = (CHAR)param_2;
    return 1;
  }
  local_4 = 0;
  iVar2 = WideCharToMultiByte(DAT_004de6b0,0x220,&param_2,1,param_1,DAT_004de8cc,(LPCSTR)0x0,
                              &local_4);
  if ((iVar2 == 0) || (local_4 != 0)) {
    piVar1 = FUN_0048f9d0();
    *piVar1 = 0x2a;
    iVar2 = -1;
  }
  return iVar2;
}


