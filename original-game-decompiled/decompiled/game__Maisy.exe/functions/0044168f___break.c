
/* ==== __break @ 0044168f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044168f-0044168f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


