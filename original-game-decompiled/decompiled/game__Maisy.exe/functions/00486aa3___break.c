
/* ==== __break @ 00486aa3 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486aa3-00486aa3
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


