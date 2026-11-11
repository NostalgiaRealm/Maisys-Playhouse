
/* ==== __break @ 0043be8d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043be8d-0043be8d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


