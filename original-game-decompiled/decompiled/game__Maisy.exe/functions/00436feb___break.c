
/* ==== __break @ 00436feb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436feb-00436feb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


