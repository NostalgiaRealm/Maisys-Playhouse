
/* ==== __break @ 00489d6a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489d6a-00489d6a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


