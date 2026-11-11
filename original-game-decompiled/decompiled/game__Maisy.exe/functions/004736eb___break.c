
/* ==== __break @ 004736eb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004736eb-004736eb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


