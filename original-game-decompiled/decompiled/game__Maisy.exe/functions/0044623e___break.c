
/* ==== __break @ 0044623e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044623e-0044623e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


