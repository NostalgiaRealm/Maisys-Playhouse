
/* ==== __break @ 0045f4de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f4de-0045f4de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


