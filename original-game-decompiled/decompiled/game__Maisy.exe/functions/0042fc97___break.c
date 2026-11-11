
/* ==== __break @ 0042fc97 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042fc97-0042fc97
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


