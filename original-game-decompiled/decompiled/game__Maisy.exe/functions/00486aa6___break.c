
/* ==== __break @ 00486aa6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486aa6-00486aa6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


