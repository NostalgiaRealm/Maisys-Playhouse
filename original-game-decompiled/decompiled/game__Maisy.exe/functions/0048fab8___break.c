
/* ==== __break @ 0048fab8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048fab8-0048fab8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


