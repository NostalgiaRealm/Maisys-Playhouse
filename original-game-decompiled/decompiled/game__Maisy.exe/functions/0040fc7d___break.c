
/* ==== __break @ 0040fc7d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040fc7d-0040fc7d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


