
/* ==== __break @ 004893ec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004893ec-004893ec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


