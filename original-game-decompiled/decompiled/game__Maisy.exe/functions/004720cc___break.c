
/* ==== __break @ 004720cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004720cc-004720cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


