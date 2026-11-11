
/* ==== __freeptd @ 13004bd0 ==== 
 * signature: void __cdecl __freeptd(_ptiddata _Ptd)
 * body: 13004bd0-13004c70
 * note: Library Function - Single Match  __freeptd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 1998 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  if (DAT_13008380 != 0xffffffff) {
    if ((_Ptd != (_ptiddata)0x0) || (_Ptd = TlsGetValue(DAT_13008380), _Ptd != (_ptiddata)0x0)) {
      if (_Ptd->_errmsg != (char *)0x0) {
        FUN_13005bc0(_Ptd->_errmsg);
      }
      if (_Ptd->_werrmsg != (wchar_t *)0x0) {
        FUN_13005bc0(_Ptd->_werrmsg);
      }
      if (_Ptd->_wnamebuf0 != (wchar_t *)0x0) {
        FUN_13005bc0(_Ptd->_wnamebuf0);
      }
      if (_Ptd->_wnamebuf1 != (wchar_t *)0x0) {
        FUN_13005bc0(_Ptd->_wnamebuf1);
      }
      if (_Ptd->_wasctimebuf != (wchar_t *)0x0) {
        FUN_13005bc0(_Ptd->_wasctimebuf);
      }
      if (_Ptd->_gmtimebuf != (LPVOID)0x0) {
        FUN_13005bc0(_Ptd->_gmtimebuf);
      }
      FUN_13005bc0(_Ptd);
    }
    TlsSetValue(DAT_13008380,(LPVOID)0x0);
    return;
  }
  return;
}


