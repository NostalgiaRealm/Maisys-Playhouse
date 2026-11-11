
/* ==== __break @ 0043ed1e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ed1e-0043ed1e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


