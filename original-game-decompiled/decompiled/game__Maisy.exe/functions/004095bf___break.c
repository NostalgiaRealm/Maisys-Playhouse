
/* ==== __break @ 004095bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004095bf-004095bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


