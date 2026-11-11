
/* ==== __break @ 0045f9cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f9cc-0045f9cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


