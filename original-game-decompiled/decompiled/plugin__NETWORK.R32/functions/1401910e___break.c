
/* ==== __break @ 1401910e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401910e-1401910e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


