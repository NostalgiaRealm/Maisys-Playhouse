
/* ==== __break @ 004950e5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004950e5-004950e5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


