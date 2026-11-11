
/* ==== __break @ 0045a6de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a6de-0045a6de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


