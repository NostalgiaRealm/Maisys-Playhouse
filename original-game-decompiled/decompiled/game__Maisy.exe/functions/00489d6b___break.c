
/* ==== __break @ 00489d6b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489d6b-00489d6b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


