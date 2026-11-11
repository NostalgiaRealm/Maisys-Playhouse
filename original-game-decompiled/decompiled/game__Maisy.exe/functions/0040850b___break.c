
/* ==== __break @ 0040850b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040850b-0040850b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


