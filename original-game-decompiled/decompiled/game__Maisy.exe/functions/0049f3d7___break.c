
/* ==== __break @ 0049f3d7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f3d7-0049f3d7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


