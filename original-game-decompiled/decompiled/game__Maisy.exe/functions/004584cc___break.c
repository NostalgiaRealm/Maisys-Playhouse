
/* ==== __break @ 004584cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004584cc-004584cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


