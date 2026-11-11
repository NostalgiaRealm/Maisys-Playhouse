
/* ==== __break @ 0049f47e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f47e-0049f47e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


