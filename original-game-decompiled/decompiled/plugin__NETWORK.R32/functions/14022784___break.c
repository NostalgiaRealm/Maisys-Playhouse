
/* ==== __break @ 14022784 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022784-14022784
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


