
/* ==== __break @ 00478409 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00478409-00478409
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


