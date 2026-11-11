
/* ==== __break @ 00489fa8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489fa8-00489fa8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


