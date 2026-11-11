
/* ==== __break @ 004171bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004171bb-004171bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


