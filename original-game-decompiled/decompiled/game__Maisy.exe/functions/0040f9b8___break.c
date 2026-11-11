
/* ==== __break @ 0040f9b8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f9b8-0040f9b8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


