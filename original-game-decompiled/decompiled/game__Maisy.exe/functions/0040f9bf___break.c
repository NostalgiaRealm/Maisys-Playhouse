
/* ==== __break @ 0040f9bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f9bf-0040f9bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


