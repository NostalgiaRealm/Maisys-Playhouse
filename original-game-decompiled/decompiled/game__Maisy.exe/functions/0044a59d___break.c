
/* ==== __break @ 0044a59d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a59d-0044a59d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


