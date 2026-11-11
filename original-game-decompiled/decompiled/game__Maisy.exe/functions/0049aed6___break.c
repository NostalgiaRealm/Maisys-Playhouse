
/* ==== __break @ 0049aed6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049aed6-0049aed6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


