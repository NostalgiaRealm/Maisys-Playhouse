
/* ==== __break @ 00472fcc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00472fcc-00472fcc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


