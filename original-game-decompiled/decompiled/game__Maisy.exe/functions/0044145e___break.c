
/* ==== __break @ 0044145e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044145e-0044145e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


