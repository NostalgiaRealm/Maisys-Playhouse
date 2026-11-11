
/* ==== __break @ 0043c22d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c22d-0043c22d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


