
/* ==== __break @ 0044e595 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e595-0044e595
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


