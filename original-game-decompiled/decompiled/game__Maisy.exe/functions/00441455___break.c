
/* ==== __break @ 00441455 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441455-00441455
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


