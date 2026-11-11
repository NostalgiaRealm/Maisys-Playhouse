
/* ==== __break @ 00486aa8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486aa8-00486aa8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


