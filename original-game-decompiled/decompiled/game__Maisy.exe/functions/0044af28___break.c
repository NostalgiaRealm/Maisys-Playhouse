
/* ==== __break @ 0044af28 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044af28-0044af28
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


