
/* ==== __break @ 1401f61a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401f61a-1401f61a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


