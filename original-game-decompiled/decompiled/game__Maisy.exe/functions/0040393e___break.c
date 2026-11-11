
/* ==== __break @ 0040393e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040393e-0040393e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


