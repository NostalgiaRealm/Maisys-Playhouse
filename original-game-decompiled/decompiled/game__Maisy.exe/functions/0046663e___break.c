
/* ==== __break @ 0046663e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046663e-0046663e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


