
/* ==== __break @ 004365de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004365de-004365de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


