
/* ==== __break @ 0041110a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041110a-0041110a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


