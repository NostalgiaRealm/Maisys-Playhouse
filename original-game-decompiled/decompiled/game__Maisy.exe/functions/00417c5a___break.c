
/* ==== __break @ 00417c5a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417c5a-00417c5a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


