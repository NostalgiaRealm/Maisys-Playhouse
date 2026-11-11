
/* ==== __break @ 0040f66f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f66f-0040f66f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


