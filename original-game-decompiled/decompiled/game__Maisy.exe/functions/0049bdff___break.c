
/* ==== __break @ 0049bdff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049bdff-0049bdff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


