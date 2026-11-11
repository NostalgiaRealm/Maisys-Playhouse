
/* ==== __break @ 0040f66d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f66d-0040f66d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


