
/* ==== __break @ 0045f56e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f56e-0045f56e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


