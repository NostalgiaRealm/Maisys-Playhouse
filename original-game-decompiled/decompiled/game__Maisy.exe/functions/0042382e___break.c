
/* ==== __break @ 0042382e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042382e-0042382e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


