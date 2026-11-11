
/* ==== __break @ 004794e2 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004794e2-004794e2
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


