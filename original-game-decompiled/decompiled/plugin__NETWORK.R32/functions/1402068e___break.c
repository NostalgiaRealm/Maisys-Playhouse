
/* ==== __break @ 1402068e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402068e-1402068e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


