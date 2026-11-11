
/* ==== __break @ 004893ef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004893ef-004893ef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


