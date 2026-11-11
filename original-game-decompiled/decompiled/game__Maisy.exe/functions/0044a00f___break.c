
/* ==== __break @ 0044a00f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a00f-0044a00f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


