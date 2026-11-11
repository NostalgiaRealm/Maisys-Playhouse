
/* ==== __break @ 0044a8cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a8cc-0044a8cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


