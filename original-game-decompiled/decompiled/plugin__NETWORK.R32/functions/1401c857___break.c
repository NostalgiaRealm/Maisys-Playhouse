
/* ==== __break @ 1401c857 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c857-1401c857
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


