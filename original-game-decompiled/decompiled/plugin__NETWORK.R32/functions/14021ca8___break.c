
/* ==== __break @ 14021ca8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021ca8-14021ca8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


