
/* ==== __break @ 0040f687 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f687-0040f687
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


