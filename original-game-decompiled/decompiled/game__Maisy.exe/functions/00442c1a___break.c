
/* ==== __break @ 00442c1a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442c1a-00442c1a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


