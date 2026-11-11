
/* ==== _abort @ 1202c1c5 ==== 
 * signature: noreturn void __cdecl _abort(void)
 * body: 1202c1c5-1202c1c9
 * thunk to: _abort
 */

void __cdecl _abort(void)

{
  FUN_1202b0f0(10);
  _raise(0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


