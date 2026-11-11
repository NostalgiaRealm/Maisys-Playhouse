
/* ==== __break @ 0042448a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042448a-0042448a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


