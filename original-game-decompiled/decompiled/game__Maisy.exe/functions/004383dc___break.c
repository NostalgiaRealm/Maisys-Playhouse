
/* ==== __break @ 004383dc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004383dc-004383dc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


