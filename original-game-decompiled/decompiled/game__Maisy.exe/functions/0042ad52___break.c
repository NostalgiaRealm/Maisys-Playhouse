
/* ==== __break @ 0042ad52 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042ad52-0042ad52
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


