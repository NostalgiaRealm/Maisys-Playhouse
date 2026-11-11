
/* ==== __break @ 00436c7b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436c7b-00436c7b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


