
/* ==== __break @ 0049adba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049adba-0049adba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


