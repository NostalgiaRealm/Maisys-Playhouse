
/* ==== __break @ 00436e2e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436e2e-00436e2e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


