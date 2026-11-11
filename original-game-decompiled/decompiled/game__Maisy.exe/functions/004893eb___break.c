
/* ==== __break @ 004893eb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004893eb-004893eb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


