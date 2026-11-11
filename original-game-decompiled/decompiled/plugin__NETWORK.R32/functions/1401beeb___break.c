
/* ==== __break @ 1401beeb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401beeb-1401beeb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


