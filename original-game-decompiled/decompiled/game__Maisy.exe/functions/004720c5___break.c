
/* ==== __break @ 004720c5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004720c5-004720c5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


