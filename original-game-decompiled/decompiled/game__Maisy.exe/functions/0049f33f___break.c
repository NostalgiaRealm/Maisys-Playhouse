
/* ==== __break @ 0049f33f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f33f-0049f33f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


