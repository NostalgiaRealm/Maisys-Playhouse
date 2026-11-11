
/* ==== __break @ 140183b5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183b5-140183b5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


