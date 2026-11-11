
/* ==== __break @ 0045ad87 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045ad87-0045ad87
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


