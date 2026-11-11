
/* ==== __break @ 004950eb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004950eb-004950eb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


