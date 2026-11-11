
/* ==== __break @ 00441add ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441add-00441add
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


