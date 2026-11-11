
/* ==== __break @ 004720cb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004720cb-004720cb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


