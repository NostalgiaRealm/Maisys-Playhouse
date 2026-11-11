
/* ==== __break @ 1402067e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402067e-1402067e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


