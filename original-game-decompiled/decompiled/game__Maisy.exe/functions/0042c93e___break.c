
/* ==== __break @ 0042c93e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042c93e-0042c93e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


