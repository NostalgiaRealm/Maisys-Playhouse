
/* ==== __break @ 0044145d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044145d-0044145d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


