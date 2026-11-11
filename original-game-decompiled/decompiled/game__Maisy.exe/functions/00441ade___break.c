
/* ==== __break @ 00441ade ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441ade-00441ade
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


