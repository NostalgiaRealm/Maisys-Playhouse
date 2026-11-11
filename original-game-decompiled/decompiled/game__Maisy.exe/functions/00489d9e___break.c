
/* ==== __break @ 00489d9e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489d9e-00489d9e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


