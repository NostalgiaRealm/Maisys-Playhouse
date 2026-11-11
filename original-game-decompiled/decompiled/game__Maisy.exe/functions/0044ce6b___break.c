
/* ==== __break @ 0044ce6b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044ce6b-0044ce6b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


