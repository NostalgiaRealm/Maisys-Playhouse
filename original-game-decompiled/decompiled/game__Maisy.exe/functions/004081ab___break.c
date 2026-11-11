
/* ==== __break @ 004081ab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004081ab-004081ab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


