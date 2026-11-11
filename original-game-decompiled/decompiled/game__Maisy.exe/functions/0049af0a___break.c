
/* ==== __break @ 0049af0a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049af0a-0049af0a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


