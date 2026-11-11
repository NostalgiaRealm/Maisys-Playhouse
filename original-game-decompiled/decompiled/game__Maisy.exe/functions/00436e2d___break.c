
/* ==== __break @ 00436e2d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436e2d-00436e2d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


