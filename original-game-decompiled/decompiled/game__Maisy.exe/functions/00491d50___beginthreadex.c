
/* ==== __beginthreadex @ 00491d50 ==== 
 * signature: uintptr_t __cdecl __beginthreadex(void * _Security, uint _StackSize, _StartAddress * _StartAddress, void * _ArgList, uint _InitFlag, uint * _ThrdAddr)
 * body: 00491d50-00491dca
 * note: Library Function - Single Match  __beginthreadex  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __beginthreadex
   
   Library: Visual Studio 1998 Release */

uintptr_t __cdecl
__beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,
               uint _InitFlag,uint *_ThrdAddr)

{
  _ptiddata _Ptd;
  HANDLE pvVar1;
  pthreadlocinfo unaff_EDI;
  DWORD DVar2;
  
  DVar2 = 0;
  _Ptd = FUN_0048ebf0(1,0x74);
  if (_Ptd != (_ptiddata)0x0) {
    __initptd(_Ptd,unaff_EDI);
    _Ptd->_cvtbuf = (char *)_StartAddress;
    *(void **)_Ptd->_con_ch_buf = _ArgList;
    _Ptd->_thandle = 0xffffffff;
    pvVar1 = CreateThread(_Security,_StackSize,FUN_00491dd0,_Ptd,_InitFlag,_ThrdAddr);
    if (pvVar1 != (HANDLE)0x0) {
      return (uintptr_t)pvVar1;
    }
    DVar2 = GetLastError();
  }
  FUN_0048e750(_Ptd);
  if (DVar2 != 0) {
    __dosmaperr(DVar2);
  }
  return 0;
}


