
/* ==== __break @ 0048123e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048123e-0048123e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


