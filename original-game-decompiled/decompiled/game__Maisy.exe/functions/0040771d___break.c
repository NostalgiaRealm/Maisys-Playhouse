
/* ==== __break @ 0040771d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040771d-0040771d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


