
/* ==== __break @ 004245ef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004245ef-004245ef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


