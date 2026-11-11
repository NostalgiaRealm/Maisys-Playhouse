
/* ==== __break @ 0041ef2a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ef2a-0041ef2a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


