
/* ==== __break @ 00479bcf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bcf-00479bcf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


