
/* ==== __break @ 004893ea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004893ea-004893ea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


