
/* ==== __break @ 0042e196 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042e196-0042e196
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


