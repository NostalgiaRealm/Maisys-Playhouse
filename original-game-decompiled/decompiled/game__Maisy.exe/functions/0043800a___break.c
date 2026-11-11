
/* ==== __break @ 0043800a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043800a-0043800a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


