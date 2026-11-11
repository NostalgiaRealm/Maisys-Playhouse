
/* ==== __break @ 0049be1f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049be1f-0049be1f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


