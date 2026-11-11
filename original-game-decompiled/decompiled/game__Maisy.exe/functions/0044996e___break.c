
/* ==== __break @ 0044996e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044996e-0044996e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


