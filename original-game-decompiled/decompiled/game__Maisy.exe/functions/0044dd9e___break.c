
/* ==== __break @ 0044dd9e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044dd9e-0044dd9e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


