
/* ==== __break @ 00486ead ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486ead-00486ead
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


