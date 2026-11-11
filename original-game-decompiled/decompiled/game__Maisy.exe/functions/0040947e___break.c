
/* ==== __break @ 0040947e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040947e-0040947e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


