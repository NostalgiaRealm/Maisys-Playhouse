
/* ==== __freeptd @ 11029820 ==== 
 * signature: void __cdecl __freeptd(_ptiddata _Ptd)
 * body: 11029820-110298c0
 * note: Library Function - Single Match  __freeptd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 1998 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  if (DAT_11036598 != 0xffffffff) {
    if ((_Ptd != (_ptiddata)0x0) || (_Ptd = TlsGetValue(DAT_11036598), _Ptd != (_ptiddata)0x0)) {
      if (_Ptd->_errmsg != (char *)0x0) {
        FUN_11029180(_Ptd->_errmsg);
      }
      if (_Ptd->_werrmsg != (wchar_t *)0x0) {
        FUN_11029180(_Ptd->_werrmsg);
      }
      if (_Ptd->_wnamebuf0 != (wchar_t *)0x0) {
        FUN_11029180(_Ptd->_wnamebuf0);
      }
      if (_Ptd->_wnamebuf1 != (wchar_t *)0x0) {
        FUN_11029180(_Ptd->_wnamebuf1);
      }
      if (_Ptd->_wasctimebuf != (wchar_t *)0x0) {
        FUN_11029180(_Ptd->_wasctimebuf);
      }
      if (_Ptd->_gmtimebuf != (LPVOID)0x0) {
        FUN_11029180(_Ptd->_gmtimebuf);
      }
      FUN_11029180(_Ptd);
    }
    TlsSetValue(DAT_11036598,(LPVOID)0x0);
    return;
  }
  return;
}


