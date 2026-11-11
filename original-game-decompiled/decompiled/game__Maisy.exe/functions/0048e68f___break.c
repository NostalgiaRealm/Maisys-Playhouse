
/* ==== __break @ 0048e68f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048e68f-0048e68f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


