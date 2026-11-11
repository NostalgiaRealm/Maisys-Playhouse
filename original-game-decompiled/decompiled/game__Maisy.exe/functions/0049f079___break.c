
/* ==== __break @ 0049f079 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f079-0049f079
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


