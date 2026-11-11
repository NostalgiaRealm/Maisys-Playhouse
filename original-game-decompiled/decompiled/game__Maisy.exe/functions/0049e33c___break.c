
/* ==== __break @ 0049e33c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049e33c-0049e33c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


