
/* ==== __break @ 0040393d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040393d-0040393d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


