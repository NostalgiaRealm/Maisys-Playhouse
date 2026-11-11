
/* ==== __break @ 1401c7d5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7d5-1401c7d5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


