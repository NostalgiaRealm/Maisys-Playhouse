
/* ==== __break @ 0045f75d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f75d-0045f75d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


