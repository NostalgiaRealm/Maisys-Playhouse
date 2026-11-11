
/* ==== __break @ 00489d93 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489d93-00489d93
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


