
/* ==== __break @ 0044a59f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a59f-0044a59f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


