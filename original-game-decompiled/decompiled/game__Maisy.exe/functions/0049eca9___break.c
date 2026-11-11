
/* ==== __break @ 0049eca9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049eca9-0049eca9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


