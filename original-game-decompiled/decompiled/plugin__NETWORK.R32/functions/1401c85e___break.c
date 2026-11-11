
/* ==== __break @ 1401c85e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c85e-1401c85e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


