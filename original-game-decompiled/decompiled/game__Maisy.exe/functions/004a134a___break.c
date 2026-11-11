
/* ==== __break @ 004a134a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a134a-004a134a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


