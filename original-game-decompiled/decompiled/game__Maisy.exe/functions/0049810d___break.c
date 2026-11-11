
/* ==== __break @ 0049810d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049810d-0049810d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


