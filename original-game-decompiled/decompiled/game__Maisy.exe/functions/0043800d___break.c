
/* ==== __break @ 0043800d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043800d-0043800d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


