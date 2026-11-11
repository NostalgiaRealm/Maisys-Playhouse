
/* ==== __break @ 004736ec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004736ec-004736ec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


