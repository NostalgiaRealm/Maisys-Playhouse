
/* ==== __break @ 004893ed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004893ed-004893ed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


