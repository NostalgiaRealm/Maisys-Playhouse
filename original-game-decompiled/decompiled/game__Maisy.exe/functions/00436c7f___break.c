
/* ==== __break @ 00436c7f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436c7f-00436c7f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


