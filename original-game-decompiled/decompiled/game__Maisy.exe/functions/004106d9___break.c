
/* ==== __break @ 004106d9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004106d9-004106d9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


