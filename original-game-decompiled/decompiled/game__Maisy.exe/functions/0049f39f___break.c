
/* ==== __break @ 0049f39f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f39f-0049f39f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


