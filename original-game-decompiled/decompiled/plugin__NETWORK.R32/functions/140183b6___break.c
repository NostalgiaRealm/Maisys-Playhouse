
/* ==== __break @ 140183b6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183b6-140183b6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


