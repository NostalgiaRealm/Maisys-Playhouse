
/* ==== __break @ 00466638 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00466638-00466638
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


