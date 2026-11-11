
/* ==== __break @ 0044d62e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044d62e-0044d62e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


