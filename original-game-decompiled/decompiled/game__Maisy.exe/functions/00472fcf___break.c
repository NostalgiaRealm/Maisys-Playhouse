
/* ==== __break @ 00472fcf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00472fcf-00472fcf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


