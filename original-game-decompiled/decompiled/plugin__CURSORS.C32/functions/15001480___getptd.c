
/* ==== __getptd @ 15001480 ==== 
 * signature: _ptiddata __cdecl __getptd(void)
 * body: 15001480-150014ee
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
  _Ptd = TlsGetValue(DAT_1500508c);
  if (_Ptd == (_ptiddata)0x0) {
    _Ptd = FUN_15002480(1,0x74);
    if (_Ptd != (_ptiddata)0x0) {
      BVar1 = TlsSetValue(DAT_1500508c,_Ptd);
      if (BVar1 != 0) {
        __initptd(_Ptd,unaff_EDI);
        DVar2 = GetCurrentThreadId();
        _Ptd->_tid = DVar2;
        _Ptd->_thandle = 0xffffffff;
        goto LAB_150014e3;
      }
    }
    __amsg_exit(0x10);
  }
LAB_150014e3:
  SetLastError(dwErrCode);
  return _Ptd;
}


