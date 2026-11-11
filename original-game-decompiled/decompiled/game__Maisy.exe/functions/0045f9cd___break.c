
/* ==== __break @ 0045f9cd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f9cd-0045f9cd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


