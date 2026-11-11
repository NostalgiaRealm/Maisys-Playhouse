
/* ==== __break @ 00458ffb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00458ffb-00458ffb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


