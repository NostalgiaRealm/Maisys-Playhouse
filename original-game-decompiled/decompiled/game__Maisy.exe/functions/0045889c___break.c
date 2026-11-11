
/* ==== __break @ 0045889c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045889c-0045889c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


