
/* ==== __break @ 0045a1dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a1dd-0045a1dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


