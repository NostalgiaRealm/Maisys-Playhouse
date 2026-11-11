
/* ==== _wctomb @ 0049e750 ==== 
 * signature: int __cdecl _wctomb(char * _MbCh, wchar_t _WCh)
 * body: 0049e750-0049e7a5
 * note: Library Function - Single Match  _wctomb  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _wctomb
   
   Library: Visual Studio 1998 Release */

int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = DAT_004e6794 == 0;
  if (bVar2) {
    DAT_004e6798 = DAT_004e6798 + 1;
  }
  else {
    __lock(0x13);
  }
  iVar1 = __wctomb_lk(_MbCh,_WCh);
  if (!bVar2) {
    FUN_00493e20(0x13);
    return iVar1;
  }
  DAT_004e6798 = DAT_004e6798 + -1;
  return iVar1;
}


