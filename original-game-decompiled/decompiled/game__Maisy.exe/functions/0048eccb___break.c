
/* ==== __break @ 0048eccb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048eccb-0048eccb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


