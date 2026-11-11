
/* ==== __break @ 0046a609 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046a609-0046a609
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


