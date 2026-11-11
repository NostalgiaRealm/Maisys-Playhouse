
/* ==== __break @ 00436edc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436edc-00436edc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


