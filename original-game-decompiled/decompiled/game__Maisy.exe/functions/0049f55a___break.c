
/* ==== __break @ 0049f55a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f55a-0049f55a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


