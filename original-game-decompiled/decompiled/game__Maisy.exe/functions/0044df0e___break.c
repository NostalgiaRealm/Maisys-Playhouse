
/* ==== __break @ 0044df0e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044df0e-0044df0e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


