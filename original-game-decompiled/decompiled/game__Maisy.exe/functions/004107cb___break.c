
/* ==== __break @ 004107cb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004107cb-004107cb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


