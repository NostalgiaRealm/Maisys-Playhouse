
/* ==== __break @ 0043800e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043800e-0043800e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


