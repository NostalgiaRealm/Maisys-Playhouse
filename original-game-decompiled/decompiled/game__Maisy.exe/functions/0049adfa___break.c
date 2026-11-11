
/* ==== __break @ 0049adfa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049adfa-0049adfa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


