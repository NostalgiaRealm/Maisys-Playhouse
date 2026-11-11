
/* ==== __break @ 0049e33a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049e33a-0049e33a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


