
/* ==== __break @ 1402278e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402278e-1402278e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


