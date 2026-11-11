
/* ==== __break @ 004084bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004084bf-004084bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


