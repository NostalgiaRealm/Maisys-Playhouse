
/* ==== __break @ 0041062f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041062f-0041062f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


