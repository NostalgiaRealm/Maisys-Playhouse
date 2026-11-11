
/* ==== __break @ 0044a95a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a95a-0044a95a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


