
/* ==== __break @ 0041ef2e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ef2e-0041ef2e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


