
/* ==== __break @ 00436e26 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436e26-00436e26
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


