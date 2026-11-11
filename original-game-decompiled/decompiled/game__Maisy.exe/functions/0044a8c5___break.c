
/* ==== __break @ 0044a8c5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a8c5-0044a8c5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


