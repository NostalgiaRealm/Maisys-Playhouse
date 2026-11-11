
/* ==== __break @ 0049ff9e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ff9e-0049ff9e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


