
/* ==== __break @ 00448ed7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448ed7-00448ed7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


