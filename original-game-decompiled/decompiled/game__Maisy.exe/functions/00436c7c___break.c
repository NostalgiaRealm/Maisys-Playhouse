
/* ==== __break @ 00436c7c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436c7c-00436c7c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


