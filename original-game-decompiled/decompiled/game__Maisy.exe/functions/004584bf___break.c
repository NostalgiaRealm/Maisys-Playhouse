
/* ==== __break @ 004584bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004584bf-004584bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


