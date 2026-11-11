
/* ==== __break @ 00441b3b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441b3b-00441b3b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


