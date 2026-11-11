
/* ==== __break @ 0048877e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048877e-0048877e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


