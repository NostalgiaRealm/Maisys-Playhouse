
/* ==== __break @ 004584be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004584be-004584be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


