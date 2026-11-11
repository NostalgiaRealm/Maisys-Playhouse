
/* ==== __break @ 0043178d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043178d-0043178d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


