
/* ==== __break @ 0049af0f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049af0f-0049af0f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


