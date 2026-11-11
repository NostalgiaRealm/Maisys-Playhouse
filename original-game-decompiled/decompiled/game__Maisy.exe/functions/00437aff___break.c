
/* ==== __break @ 00437aff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00437aff-00437aff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


