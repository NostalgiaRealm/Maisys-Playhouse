
/* ==== __break @ 004584cb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004584cb-004584cb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


