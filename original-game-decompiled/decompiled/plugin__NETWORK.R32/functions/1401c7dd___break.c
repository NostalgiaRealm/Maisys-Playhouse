
/* ==== __break @ 1401c7dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7dd-1401c7dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


