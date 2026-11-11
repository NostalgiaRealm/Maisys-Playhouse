
/* ==== __break @ 0044a59a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a59a-0044a59a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


