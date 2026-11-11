
/* ==== __break @ 0049be1a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049be1a-0049be1a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


