
/* ==== __break @ 0049af0d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049af0d-0049af0d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


