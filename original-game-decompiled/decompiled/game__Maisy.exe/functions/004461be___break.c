
/* ==== __break @ 004461be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004461be-004461be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


