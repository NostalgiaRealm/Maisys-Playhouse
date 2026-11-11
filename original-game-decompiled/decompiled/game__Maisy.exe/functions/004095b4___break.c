
/* ==== __break @ 004095b4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004095b4-004095b4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


