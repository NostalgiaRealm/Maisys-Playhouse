
/* ==== __break @ 0042e19a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042e19a-0042e19a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


