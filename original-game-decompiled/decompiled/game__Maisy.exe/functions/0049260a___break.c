
/* ==== __break @ 0049260a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049260a-0049260a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


