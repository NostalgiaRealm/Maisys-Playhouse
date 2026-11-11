
/* ==== __break @ 00472fca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00472fca-00472fca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


