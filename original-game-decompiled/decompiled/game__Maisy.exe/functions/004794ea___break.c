
/* ==== __break @ 004794ea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004794ea-004794ea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


