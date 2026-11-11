
/* ==== __break @ 0044affe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044affe-0044affe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


