
/* ==== __break @ 00472fcd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00472fcd-00472fcd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


