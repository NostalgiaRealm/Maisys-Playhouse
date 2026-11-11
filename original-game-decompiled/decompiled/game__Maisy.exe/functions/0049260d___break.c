
/* ==== __break @ 0049260d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049260d-0049260d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


