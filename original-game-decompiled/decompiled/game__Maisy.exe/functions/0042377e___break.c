
/* ==== __break @ 0042377e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042377e-0042377e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


