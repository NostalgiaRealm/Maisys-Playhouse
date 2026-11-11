
/* ==== __break @ 0043c22c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c22c-0043c22c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


