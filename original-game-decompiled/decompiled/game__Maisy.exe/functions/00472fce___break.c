
/* ==== __break @ 00472fce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00472fce-00472fce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


