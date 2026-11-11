
/* ==== __break @ 00436edf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436edf-00436edf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


