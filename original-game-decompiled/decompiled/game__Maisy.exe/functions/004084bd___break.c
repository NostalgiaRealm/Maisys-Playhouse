
/* ==== __break @ 004084bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004084bd-004084bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


