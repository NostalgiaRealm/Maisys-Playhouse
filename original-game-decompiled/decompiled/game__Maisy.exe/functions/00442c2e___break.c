
/* ==== __break @ 00442c2e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442c2e-00442c2e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


