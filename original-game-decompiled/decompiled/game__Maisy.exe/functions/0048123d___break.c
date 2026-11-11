
/* ==== __break @ 0048123d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048123d-0048123d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


