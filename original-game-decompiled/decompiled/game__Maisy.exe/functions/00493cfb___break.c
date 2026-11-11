
/* ==== __break @ 00493cfb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493cfb-00493cfb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


