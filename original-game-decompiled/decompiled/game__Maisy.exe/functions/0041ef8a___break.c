
/* ==== __break @ 0041ef8a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ef8a-0041ef8a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


