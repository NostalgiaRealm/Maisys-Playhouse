
/* ==== __break @ 0046a60f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046a60f-0046a60f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


