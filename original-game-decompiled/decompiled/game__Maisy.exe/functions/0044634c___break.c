
/* ==== __break @ 0044634c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044634c-0044634c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


