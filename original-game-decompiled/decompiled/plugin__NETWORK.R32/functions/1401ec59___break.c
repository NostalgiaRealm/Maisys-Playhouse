
/* ==== __break @ 1401ec59 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec59-1401ec59
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


