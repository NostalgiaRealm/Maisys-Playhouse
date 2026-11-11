
/* ==== __break @ 140183bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183bb-140183bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


