
/* ==== __break @ 00451f5e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f5e-00451f5e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


