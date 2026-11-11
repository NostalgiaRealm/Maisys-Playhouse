
/* ==== __break @ 0044fe2d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044fe2d-0044fe2d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


