
/* ==== __break @ 00466639 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00466639-00466639
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


