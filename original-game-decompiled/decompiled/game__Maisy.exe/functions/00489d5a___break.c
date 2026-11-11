
/* ==== __break @ 00489d5a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489d5a-00489d5a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


