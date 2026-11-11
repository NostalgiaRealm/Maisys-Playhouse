
/* ==== __break @ 0043c21e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c21e-0043c21e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


