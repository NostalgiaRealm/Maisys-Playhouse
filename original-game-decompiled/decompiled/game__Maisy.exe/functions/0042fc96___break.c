
/* ==== __break @ 0042fc96 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042fc96-0042fc96
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


