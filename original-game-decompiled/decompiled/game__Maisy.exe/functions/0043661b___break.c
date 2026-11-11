
/* ==== __break @ 0043661b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043661b-0043661b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


