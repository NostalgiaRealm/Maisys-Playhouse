
/* ==== __break @ 00472fef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00472fef-00472fef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


