
/* ==== __break @ 1401beee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401beee-1401beee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


