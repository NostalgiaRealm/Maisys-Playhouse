
/* ==== __break @ 004950ed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004950ed-004950ed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


