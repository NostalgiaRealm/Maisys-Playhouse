
/* ==== __break @ 0043996f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043996f-0043996f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


