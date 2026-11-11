
/* ==== __break @ 00451ecf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451ecf-00451ecf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


