
/* ==== __break @ 0041ecbd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ecbd-0041ecbd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


