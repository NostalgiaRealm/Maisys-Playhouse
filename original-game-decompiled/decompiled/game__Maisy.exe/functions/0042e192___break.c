
/* ==== __break @ 0042e192 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042e192-0042e192
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


