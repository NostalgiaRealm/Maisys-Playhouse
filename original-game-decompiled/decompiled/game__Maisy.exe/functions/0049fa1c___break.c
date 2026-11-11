
/* ==== __break @ 0049fa1c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049fa1c-0049fa1c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


