
/* ==== __break @ 0049ecaf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ecaf-0049ecaf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


