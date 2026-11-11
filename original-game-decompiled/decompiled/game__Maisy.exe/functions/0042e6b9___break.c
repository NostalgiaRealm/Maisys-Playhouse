
/* ==== __break @ 0042e6b9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042e6b9-0042e6b9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


