
/* ==== __break @ 004178bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004178bb-004178bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


