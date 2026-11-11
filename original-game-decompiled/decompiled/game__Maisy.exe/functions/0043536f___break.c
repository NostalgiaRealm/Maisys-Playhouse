
/* ==== __break @ 0043536f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043536f-0043536f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


