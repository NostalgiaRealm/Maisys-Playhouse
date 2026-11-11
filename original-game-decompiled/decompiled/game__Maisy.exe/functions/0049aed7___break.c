
/* ==== __break @ 0049aed7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049aed7-0049aed7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


