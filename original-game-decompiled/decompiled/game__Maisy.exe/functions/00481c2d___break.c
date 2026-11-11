
/* ==== __break @ 00481c2d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481c2d-00481c2d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


