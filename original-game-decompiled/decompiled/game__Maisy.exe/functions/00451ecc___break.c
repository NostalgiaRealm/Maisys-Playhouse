
/* ==== __break @ 00451ecc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451ecc-00451ecc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


