
/* ==== __break @ 0045f9c6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f9c6-0045f9c6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


