
/* ==== __break @ 00408503 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00408503-00408503
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


