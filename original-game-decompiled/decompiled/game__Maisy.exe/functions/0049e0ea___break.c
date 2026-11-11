
/* ==== __break @ 0049e0ea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049e0ea-0049e0ea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


