
/* ==== __break @ 0049f544 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f544-0049f544
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


