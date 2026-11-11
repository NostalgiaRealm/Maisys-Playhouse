
/* ==== __break @ 004245ed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004245ed-004245ed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


