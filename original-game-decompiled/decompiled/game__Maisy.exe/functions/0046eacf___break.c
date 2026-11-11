
/* ==== __break @ 0046eacf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046eacf-0046eacf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


