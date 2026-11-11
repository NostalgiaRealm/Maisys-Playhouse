
/* ==== __break @ 1401beec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401beec-1401beec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


