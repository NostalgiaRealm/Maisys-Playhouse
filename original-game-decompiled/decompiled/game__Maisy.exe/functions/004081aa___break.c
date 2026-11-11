
/* ==== __break @ 004081aa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004081aa-004081aa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


