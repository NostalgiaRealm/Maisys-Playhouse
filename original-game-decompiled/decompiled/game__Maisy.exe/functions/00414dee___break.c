
/* ==== __break @ 00414dee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00414dee-00414dee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


