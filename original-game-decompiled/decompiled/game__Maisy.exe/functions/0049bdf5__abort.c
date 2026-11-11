
/* ==== _abort @ 0049bdf5 ==== 
 * signature: noreturn void __cdecl _abort(void)
 * body: 0049bdf5-0049bdf9
 * thunk to: _abort
 */

void __cdecl _abort(void)

{
  FUN_0049b9a0(10);
  _raise(0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


