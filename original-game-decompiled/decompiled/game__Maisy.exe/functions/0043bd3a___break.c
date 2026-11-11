
/* ==== __break @ 0043bd3a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bd3a-0043bd3a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


