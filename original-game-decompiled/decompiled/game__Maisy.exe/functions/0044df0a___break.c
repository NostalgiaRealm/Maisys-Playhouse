
/* ==== __break @ 0044df0a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044df0a-0044df0a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


