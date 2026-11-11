
/* ==== __break @ 0040947d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040947d-0040947d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


