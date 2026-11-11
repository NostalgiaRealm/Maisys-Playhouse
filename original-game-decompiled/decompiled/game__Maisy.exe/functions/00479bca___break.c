
/* ==== __break @ 00479bca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bca-00479bca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


