
/* ==== __break @ 0040f7fe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f7fe-0040f7fe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


