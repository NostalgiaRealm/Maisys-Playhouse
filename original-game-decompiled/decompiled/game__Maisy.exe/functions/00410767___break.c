
/* ==== __break @ 00410767 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410767-00410767
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


