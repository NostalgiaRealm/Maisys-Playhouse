
/* ==== __break @ 00441aca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441aca-00441aca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


