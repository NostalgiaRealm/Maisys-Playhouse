
/* ==== __break @ 0042448e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042448e-0042448e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


