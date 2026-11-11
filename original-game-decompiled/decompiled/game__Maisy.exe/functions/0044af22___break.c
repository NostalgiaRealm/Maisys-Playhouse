
/* ==== __break @ 0044af22 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044af22-0044af22
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


