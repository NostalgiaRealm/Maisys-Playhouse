
/* ==== __break @ 0044180f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044180f-0044180f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


