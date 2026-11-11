
/* ==== __break @ 0044168a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044168a-0044168a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


