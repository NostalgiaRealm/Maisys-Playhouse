
/* ==== __break @ 00489d5f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489d5f-00489d5f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


