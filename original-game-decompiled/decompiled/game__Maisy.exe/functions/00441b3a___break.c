
/* ==== __break @ 00441b3a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441b3a-00441b3a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


