
/* ==== __break @ 0048123a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048123a-0048123a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


