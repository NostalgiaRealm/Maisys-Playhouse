
/* ==== __break @ 00489d9d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489d9d-00489d9d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


