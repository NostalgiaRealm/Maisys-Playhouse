
/* ==== __break @ 0044cf1e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044cf1e-0044cf1e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


