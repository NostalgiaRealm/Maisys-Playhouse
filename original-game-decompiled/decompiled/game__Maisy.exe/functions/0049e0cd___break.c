
/* ==== __break @ 0049e0cd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049e0cd-0049e0cd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


