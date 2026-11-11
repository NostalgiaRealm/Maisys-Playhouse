
/* ==== __break @ 0044a956 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a956-0044a956
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


