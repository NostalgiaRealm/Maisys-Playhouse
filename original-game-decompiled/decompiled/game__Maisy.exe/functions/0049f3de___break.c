
/* ==== __break @ 0049f3de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f3de-0049f3de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


