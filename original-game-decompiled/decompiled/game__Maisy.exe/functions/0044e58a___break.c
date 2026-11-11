
/* ==== __break @ 0044e58a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e58a-0044e58a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


