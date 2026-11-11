
/* ==== __break @ 0045f04a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f04a-0045f04a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


