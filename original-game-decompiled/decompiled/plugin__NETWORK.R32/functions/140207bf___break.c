
/* ==== __break @ 140207bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140207bf-140207bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


