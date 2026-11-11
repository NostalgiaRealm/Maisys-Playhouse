
/* ==== __break @ 0049810c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049810c-0049810c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


