
/* ==== __break @ 0045f3fe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f3fe-0045f3fe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


