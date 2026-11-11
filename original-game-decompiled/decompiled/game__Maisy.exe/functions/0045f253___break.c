
/* ==== __break @ 0045f253 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f253-0045f253
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


