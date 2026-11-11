
/* ==== __break @ 00438cca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00438cca-00438cca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


