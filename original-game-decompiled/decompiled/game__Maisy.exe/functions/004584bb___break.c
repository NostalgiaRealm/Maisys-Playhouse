
/* ==== __break @ 004584bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004584bb-004584bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


