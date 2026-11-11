
/* ==== __break @ 004736ed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004736ed-004736ed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


