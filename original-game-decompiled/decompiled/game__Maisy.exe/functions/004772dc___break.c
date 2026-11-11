
/* ==== __break @ 004772dc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004772dc-004772dc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


