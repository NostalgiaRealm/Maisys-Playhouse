
/* ==== __break @ 00441806 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441806-00441806
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


