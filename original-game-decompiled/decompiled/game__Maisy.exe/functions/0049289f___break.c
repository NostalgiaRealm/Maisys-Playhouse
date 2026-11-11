
/* ==== __break @ 0049289f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049289f-0049289f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


