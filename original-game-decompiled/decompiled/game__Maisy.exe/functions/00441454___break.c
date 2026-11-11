
/* ==== __break @ 00441454 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441454-00441454
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


