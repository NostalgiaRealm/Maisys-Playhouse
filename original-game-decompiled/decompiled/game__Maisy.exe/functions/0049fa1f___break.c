
/* ==== __break @ 0049fa1f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049fa1f-0049fa1f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


