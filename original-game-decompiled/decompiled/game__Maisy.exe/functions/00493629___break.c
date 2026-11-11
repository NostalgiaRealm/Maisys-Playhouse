
/* ==== __break @ 00493629 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493629-00493629
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


