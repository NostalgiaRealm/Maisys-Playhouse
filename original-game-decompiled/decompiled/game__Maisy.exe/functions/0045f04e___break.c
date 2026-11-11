
/* ==== __break @ 0045f04e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f04e-0045f04e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


