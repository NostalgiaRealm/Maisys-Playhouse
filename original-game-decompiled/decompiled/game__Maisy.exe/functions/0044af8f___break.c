
/* ==== __break @ 0044af8f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044af8f-0044af8f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


