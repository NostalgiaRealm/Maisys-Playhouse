
/* ==== __break @ 0045f273 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f273-0045f273
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


