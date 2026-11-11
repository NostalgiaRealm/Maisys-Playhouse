
/* ==== __break @ 0048ca9b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048ca9b-0048ca9b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


