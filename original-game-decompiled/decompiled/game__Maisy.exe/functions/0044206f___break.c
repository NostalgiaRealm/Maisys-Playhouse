
/* ==== __break @ 0044206f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044206f-0044206f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


