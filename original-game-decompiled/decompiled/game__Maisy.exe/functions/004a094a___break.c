
/* ==== __break @ 004a094a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a094a-004a094a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


