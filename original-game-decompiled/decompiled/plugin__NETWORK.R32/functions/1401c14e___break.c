
/* ==== __break @ 1401c14e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c14e-1401c14e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


