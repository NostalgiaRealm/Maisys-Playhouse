
/* ==== __break @ 00442c1d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442c1d-00442c1d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


