
/* ==== __break @ 0042e19b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042e19b-0042e19b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


