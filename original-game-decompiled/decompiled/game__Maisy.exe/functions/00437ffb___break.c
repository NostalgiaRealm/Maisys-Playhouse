
/* ==== __break @ 00437ffb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00437ffb-00437ffb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


