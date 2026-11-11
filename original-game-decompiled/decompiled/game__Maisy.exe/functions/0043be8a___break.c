
/* ==== __break @ 0043be8a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043be8a-0043be8a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


