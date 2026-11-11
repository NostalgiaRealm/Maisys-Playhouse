
/* ==== __break @ 00436e2f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436e2f-00436e2f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


