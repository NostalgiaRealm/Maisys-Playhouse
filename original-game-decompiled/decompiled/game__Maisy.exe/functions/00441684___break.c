
/* ==== __break @ 00441684 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441684-00441684
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


