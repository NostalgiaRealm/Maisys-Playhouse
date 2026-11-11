
/* ==== __break @ 0049f07a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f07a-0049f07a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


