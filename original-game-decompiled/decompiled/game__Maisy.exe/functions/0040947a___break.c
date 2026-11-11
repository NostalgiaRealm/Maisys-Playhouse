
/* ==== __break @ 0040947a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040947a-0040947a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


