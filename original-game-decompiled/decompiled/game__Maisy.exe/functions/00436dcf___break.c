
/* ==== __break @ 00436dcf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436dcf-00436dcf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


