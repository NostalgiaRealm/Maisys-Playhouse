
/* ==== __break @ 0043661c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043661c-0043661c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


