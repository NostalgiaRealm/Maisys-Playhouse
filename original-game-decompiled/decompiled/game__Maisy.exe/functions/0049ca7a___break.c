
/* ==== __break @ 0049ca7a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ca7a-0049ca7a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


