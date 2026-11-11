
/* ==== __mtinit @ 1401adb0 ==== 
 * signature: int __cdecl __mtinit(void)
 * body: 1401adb0-1401ae0f
 * note: Library Function - Single Match  __mtinit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 1998 Release */

int __cdecl __mtinit(void)

{
  _ptiddata _Ptd;
  BOOL BVar1;
  DWORD DVar2;
  pthreadlocinfo unaff_ESI;
  
  __mtinitlocks();
  DAT_14027320 = TlsAlloc();
  if (DAT_14027320 == 0xffffffff) {
    return 0;
  }
  _Ptd = FUN_1401e520(1,0x74);
  if (_Ptd != (_ptiddata)0x0) {
    BVar1 = TlsSetValue(DAT_14027320,_Ptd);
    if (BVar1 != 0) {
      __initptd(_Ptd,unaff_ESI);
      DVar2 = GetCurrentThreadId();
      _Ptd->_tid = DVar2;
      _Ptd->_thandle = 0xffffffff;
      return 1;
    }
  }
  return 0;
}


