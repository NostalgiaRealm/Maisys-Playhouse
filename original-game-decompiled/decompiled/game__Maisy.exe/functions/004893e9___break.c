
/* ==== __break @ 004893e9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004893e9-004893e9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


