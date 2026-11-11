
/* ==== __break @ 00441b39 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441b39-00441b39
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


