
/* ==== __break @ 00408508 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00408508-00408508
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


