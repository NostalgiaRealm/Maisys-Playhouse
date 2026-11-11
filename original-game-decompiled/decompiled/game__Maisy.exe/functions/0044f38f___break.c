
/* ==== __break @ 0044f38f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044f38f-0044f38f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


