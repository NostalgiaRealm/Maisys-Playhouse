
/* ==== __break @ 00408506 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00408506-00408506
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


