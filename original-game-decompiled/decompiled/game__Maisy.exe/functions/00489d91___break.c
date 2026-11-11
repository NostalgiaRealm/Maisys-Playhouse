
/* ==== __break @ 00489d91 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489d91-00489d91
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


