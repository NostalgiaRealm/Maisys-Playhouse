
/* ==== __break @ 0045889b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045889b-0045889b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


