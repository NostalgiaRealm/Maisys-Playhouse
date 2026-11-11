
/* ==== __break @ 0047dddf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047dddf-0047dddf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


