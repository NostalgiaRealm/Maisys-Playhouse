
/* ==== __break @ 00472fee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00472fee-00472fee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


