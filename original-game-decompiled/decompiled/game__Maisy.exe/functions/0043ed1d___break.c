
/* ==== __break @ 0043ed1d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ed1d-0043ed1d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


