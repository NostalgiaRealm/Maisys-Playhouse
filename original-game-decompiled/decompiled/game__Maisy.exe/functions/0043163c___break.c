
/* ==== __break @ 0043163c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043163c-0043163c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


