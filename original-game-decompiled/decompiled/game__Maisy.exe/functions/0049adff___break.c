
/* ==== __break @ 0049adff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049adff-0049adff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


