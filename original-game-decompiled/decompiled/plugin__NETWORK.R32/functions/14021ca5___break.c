
/* ==== __break @ 14021ca5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021ca5-14021ca5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


