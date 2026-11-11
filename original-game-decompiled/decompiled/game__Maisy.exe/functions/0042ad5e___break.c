
/* ==== __break @ 0042ad5e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042ad5e-0042ad5e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


