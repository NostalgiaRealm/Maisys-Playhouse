
/* ==== __break @ 0049cafb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049cafb-0049cafb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


