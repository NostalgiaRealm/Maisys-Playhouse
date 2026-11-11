
/* ==== __break @ 004107bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004107bd-004107bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


