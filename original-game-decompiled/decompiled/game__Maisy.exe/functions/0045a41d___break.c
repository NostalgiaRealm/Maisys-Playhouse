
/* ==== __break @ 0045a41d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a41d-0045a41d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


