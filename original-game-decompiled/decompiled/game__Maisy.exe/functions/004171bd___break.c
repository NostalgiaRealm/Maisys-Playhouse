
/* ==== __break @ 004171bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004171bd-004171bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


