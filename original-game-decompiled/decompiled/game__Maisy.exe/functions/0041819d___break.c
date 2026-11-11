
/* ==== __break @ 0041819d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041819d-0041819d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


