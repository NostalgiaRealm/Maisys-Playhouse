
/* ==== __break @ 0048119a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048119a-0048119a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


