
/* ==== __break @ 0049fa1b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049fa1b-0049fa1b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


