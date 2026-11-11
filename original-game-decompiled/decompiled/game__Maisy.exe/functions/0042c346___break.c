
/* ==== __break @ 0042c346 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042c346-0042c346
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


