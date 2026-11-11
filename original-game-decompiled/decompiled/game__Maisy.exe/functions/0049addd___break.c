
/* ==== __break @ 0049addd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049addd-0049addd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


