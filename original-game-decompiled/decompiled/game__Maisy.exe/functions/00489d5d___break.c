
/* ==== __break @ 00489d5d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489d5d-00489d5d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


