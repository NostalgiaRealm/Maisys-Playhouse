
/* ==== __break @ 0046a60a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046a60a-0046a60a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


