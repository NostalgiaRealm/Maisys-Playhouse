
/* ==== __break @ 0048195b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048195b-0048195b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


