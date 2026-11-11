
/* ==== __break @ 0045894e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045894e-0045894e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


