
/* ==== __break @ 0044634a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044634a-0044634a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


