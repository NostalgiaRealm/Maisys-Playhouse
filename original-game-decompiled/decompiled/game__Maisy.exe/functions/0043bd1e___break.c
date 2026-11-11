
/* ==== __break @ 0043bd1e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bd1e-0043bd1e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


