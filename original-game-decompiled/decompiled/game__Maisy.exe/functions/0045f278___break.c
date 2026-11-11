
/* ==== __break @ 0045f278 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f278-0045f278
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


