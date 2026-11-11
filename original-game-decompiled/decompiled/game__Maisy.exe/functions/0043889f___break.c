
/* ==== __break @ 0043889f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043889f-0043889f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


