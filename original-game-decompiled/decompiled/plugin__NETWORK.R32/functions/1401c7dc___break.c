
/* ==== __break @ 1401c7dc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7dc-1401c7dc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


