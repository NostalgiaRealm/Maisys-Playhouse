
/* ==== __break @ 0045889a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045889a-0045889a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


