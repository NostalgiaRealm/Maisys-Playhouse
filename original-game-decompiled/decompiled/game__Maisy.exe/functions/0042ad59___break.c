
/* ==== __break @ 0042ad59 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042ad59-0042ad59
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


