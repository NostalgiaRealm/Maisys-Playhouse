
/* ==== __break @ 0042369d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042369d-0042369d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


