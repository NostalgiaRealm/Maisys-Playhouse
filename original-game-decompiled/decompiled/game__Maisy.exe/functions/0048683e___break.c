
/* ==== __break @ 0048683e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048683e-0048683e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


