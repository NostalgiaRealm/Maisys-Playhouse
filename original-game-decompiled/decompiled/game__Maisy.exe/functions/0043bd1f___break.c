
/* ==== __break @ 0043bd1f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bd1f-0043bd1f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


