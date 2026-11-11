
/* ==== __break @ 0044a8cd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a8cd-0044a8cd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


