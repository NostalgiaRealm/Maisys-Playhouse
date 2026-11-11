
/* ==== __break @ 0049bdfe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049bdfe-0049bdfe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


