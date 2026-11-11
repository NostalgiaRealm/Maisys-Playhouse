
/* ==== __break @ 004461b4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004461b4-004461b4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


