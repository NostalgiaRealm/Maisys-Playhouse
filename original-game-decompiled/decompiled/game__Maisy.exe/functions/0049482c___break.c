
/* ==== __break @ 0049482c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049482c-0049482c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


