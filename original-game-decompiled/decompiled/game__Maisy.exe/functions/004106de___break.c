
/* ==== __break @ 004106de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004106de-004106de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


