
/* ==== __break @ 004084bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004084bb-004084bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


