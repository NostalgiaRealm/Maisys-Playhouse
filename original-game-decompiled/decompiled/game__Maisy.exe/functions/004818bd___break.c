
/* ==== __break @ 004818bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004818bd-004818bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


