
/* ==== __getptd @ 00493bd0 ==== 
 * signature: _ptiddata __cdecl __getptd(void)
 * body: 00493bd0-00493c3e
 * note: Library Function - Single Match  __getptd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 1998 Release */

_ptiddata __cdecl __getptd(void)

{
  DWORD dwErrCode;
  _ptiddata _Ptd;
  BOOL BVar1;
  DWORD DVar2;
  pthreadlocinfo unaff_EDI;
  
  dwErrCode = GetLastError();
  _Ptd = TlsGetValue(DAT_004de440);
  if (_Ptd == (_ptiddata)0x0) {
    _Ptd = FUN_0048ebf0(1,0x74);
    if (_Ptd != (_ptiddata)0x0) {
      BVar1 = TlsSetValue(DAT_004de440,_Ptd);
      if (BVar1 != 0) {
        __initptd(_Ptd,unaff_EDI);
        DVar2 = GetCurrentThreadId();
        _Ptd->_tid = DVar2;
        _Ptd->_thandle = 0xffffffff;
        goto LAB_00493c33;
      }
    }
    __amsg_exit(0x10);
  }
LAB_00493c33:
  SetLastError(dwErrCode);
  return _Ptd;
}


