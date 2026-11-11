
/* ==== __break @ 004304d7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004304d7-004304d7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


