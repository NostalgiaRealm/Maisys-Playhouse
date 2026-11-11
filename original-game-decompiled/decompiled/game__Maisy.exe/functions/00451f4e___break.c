
/* ==== __break @ 00451f4e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f4e-00451f4e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


