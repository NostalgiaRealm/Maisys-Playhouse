
/* ==== __break @ 004151eb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004151eb-004151eb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


