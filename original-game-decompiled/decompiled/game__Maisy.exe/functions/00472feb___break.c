
/* ==== __break @ 00472feb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00472feb-00472feb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


