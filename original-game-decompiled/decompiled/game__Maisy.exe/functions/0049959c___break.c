
/* ==== __break @ 0049959c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049959c-0049959c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


