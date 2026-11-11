
/* ==== __break @ 0045f95e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f95e-0045f95e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


