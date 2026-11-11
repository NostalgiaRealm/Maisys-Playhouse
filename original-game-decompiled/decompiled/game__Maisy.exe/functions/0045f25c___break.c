
/* ==== __break @ 0045f25c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f25c-0045f25c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


