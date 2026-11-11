
/* ==== __break @ 0046961f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046961f-0046961f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


