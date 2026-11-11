
/* ==== __break @ 0045f73d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f73d-0045f73d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


