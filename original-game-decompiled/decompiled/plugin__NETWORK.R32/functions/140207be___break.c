
/* ==== __break @ 140207be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140207be-140207be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


