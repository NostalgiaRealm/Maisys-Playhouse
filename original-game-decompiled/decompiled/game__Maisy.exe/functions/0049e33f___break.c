
/* ==== __break @ 0049e33f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049e33f-0049e33f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


