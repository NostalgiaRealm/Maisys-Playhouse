
/* ==== __break @ 0049f52d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f52d-0049f52d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


