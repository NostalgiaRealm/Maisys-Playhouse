
/* ==== __break @ 0046a605 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046a605-0046a605
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


