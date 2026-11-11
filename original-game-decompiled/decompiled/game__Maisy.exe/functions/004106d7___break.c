
/* ==== __break @ 004106d7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004106d7-004106d7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


