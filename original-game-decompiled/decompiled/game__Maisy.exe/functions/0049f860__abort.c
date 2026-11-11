
/* ==== _abort @ 0049f860 ==== 
 * signature: noreturn void __cdecl _abort(void)
 * body: 0049f860-0049f87a
 * note: Library Function - Single Match  _abort  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0049f87b-0049f87e
 */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 1998 Release */

void __cdecl _abort(void)

{
  FUN_0049b9a0(10);
  _raise(0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


