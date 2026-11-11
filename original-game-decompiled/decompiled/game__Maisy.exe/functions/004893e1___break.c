
/* ==== __break @ 004893e1 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004893e1-004893e1
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


