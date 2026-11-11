
/* ==== __break @ 00486832 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486832-00486832
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


