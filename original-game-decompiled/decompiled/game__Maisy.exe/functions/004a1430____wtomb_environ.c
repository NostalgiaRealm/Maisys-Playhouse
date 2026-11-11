
/* ==== ___wtomb_environ @ 004a1430 ==== 
 * signature: int __cdecl ___wtomb_environ(void)
 * body: 004a1430-004a14b9
 * note: Library Function - Single Match  ___wtomb_environ  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___wtomb_environ
   
   Library: Visual Studio 1998 Release */

int __cdecl ___wtomb_environ(void)

{
  SIZE_T cbMultiByte;
  uchar *lpMultiByteStr;
  int iVar1;
  int *piVar2;
  
  iVar1 = *DAT_004de1c8;
  piVar2 = DAT_004de1c8;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    cbMultiByte = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (cbMultiByte == 0) {
      return -1;
    }
    lpMultiByteStr = (uchar *)FUN_00490210(cbMultiByte);
    if (lpMultiByteStr == (uchar *)0x0) {
      return -1;
    }
    iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,(LPSTR)lpMultiByteStr,cbMultiByte,
                                (LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) break;
    piVar2 = piVar2 + 1;
    FUN_004a1bf0(lpMultiByteStr,0);
    iVar1 = *piVar2;
  }
  return -1;
}


