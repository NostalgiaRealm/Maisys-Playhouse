
/* ==== __break @ 0049aed9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049aed9-0049aed9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


