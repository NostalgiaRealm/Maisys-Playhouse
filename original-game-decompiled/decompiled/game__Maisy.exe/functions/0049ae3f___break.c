
/* ==== __break @ 0049ae3f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ae3f-0049ae3f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


