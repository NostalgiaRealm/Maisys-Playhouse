
/* ==== __break @ 00451f1e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f1e-00451f1e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


