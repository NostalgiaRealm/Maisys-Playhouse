
/* ==== __break @ 004151ed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004151ed-004151ed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


