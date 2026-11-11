
/* ==== __break @ 00489d94 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489d94-00489d94
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


