
/* ==== __break @ 0040202d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040202d-0040202d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


