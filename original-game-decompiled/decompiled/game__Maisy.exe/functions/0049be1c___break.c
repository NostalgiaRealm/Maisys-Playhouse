
/* ==== __break @ 0049be1c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049be1c-0049be1c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


