
/* ==== __break @ 004736ef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004736ef-004736ef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


