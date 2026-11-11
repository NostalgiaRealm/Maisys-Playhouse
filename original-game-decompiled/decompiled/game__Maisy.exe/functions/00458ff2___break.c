
/* ==== __break @ 00458ff2 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00458ff2-00458ff2
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


