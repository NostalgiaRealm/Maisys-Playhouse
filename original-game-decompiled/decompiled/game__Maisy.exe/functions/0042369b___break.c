
/* ==== __break @ 0042369b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042369b-0042369b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


