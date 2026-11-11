
/* ==== __break @ 004106dc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004106dc-004106dc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


