
/* ==== __break @ 0041c87c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041c87c-0041c87c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


