
/* ==== __break @ 004a119e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a119e-004a119e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


