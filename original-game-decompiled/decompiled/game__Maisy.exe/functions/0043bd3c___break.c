
/* ==== __break @ 0043bd3c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bd3c-0043bd3c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


