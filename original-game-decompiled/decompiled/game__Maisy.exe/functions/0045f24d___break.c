
/* ==== __break @ 0045f24d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f24d-0045f24d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


