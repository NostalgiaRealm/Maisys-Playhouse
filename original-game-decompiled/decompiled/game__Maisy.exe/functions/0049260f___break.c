
/* ==== __break @ 0049260f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049260f-0049260f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


