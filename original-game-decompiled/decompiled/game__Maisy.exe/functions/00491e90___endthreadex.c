
/* ==== __endthreadex @ 00491e90 ==== 
 * signature: void __cdecl __endthreadex(uint _Retval)
 * body: 00491e90-00491ec4
 * note: Library Function - Single Match  __endthreadex  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00491ec5-00491ec6
 */

/* Library Function - Single Match
    __endthreadex
   
   Library: Visual Studio 1998 Release */

void __cdecl __endthreadex(uint _Retval)

{
  _ptiddata _Ptd;
  
  if (PTR_FUN_004ddee0 != (undefined *)0x0) {
    (*(code *)PTR_FUN_004ddee0)();
  }
  _Ptd = __getptd();
  if (_Ptd == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  __freeptd(_Ptd);
                    /* WARNING: Subroutine does not return */
  ExitThread(_Retval);
}


