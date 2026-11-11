
/* ==== __break @ 0044af2d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044af2d-0044af2d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


