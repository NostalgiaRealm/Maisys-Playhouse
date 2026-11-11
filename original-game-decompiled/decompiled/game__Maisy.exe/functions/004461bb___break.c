
/* ==== __break @ 004461bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004461bb-004461bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


