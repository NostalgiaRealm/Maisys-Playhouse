
/* ==== __break @ 004720c9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004720c9-004720c9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


