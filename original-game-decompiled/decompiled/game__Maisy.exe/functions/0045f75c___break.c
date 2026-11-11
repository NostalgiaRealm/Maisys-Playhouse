
/* ==== __break @ 0045f75c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f75c-0045f75c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


