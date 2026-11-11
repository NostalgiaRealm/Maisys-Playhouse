
/* ==== __break @ 004886cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004886cc-004886cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


