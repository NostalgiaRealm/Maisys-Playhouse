
/* ==== __break @ 0046eacc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046eacc-0046eacc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


