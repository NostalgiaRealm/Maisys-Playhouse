
/* ==== __break @ 0049be9c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049be9c-0049be9c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


