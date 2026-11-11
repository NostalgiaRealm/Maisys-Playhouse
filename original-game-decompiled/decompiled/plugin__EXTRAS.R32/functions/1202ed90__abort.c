
/* ==== _abort @ 1202ed90 ==== 
 * signature: noreturn void __cdecl _abort(void)
 * body: 1202ed90-1202edaa
 * note: Library Function - Single Match  _abort  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 1202edab-1202edae
 */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 1998 Release */

void __cdecl _abort(void)

{
  FUN_1202b0f0(10);
  _raise(0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


