
/* ==== __break @ 004736ea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004736ea-004736ea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


