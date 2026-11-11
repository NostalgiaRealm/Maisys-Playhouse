
/* ==== __break @ 004106d5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004106d5-004106d5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


