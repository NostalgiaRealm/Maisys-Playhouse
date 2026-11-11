
/* ==== __break @ 004246bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004246bf-004246bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


