
/* ==== __break @ 004084be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004084be-004084be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


