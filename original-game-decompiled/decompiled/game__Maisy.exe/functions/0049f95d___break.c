
/* ==== __break @ 0049f95d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f95d-0049f95d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


