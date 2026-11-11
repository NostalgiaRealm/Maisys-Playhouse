
/* ==== __break @ 0044ce7e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044ce7e-0044ce7e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


