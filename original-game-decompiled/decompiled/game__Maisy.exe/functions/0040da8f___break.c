
/* ==== __break @ 0040da8f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040da8f-0040da8f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


