
/* ==== __break @ 0046961e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046961e-0046961e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


