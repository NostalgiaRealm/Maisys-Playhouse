
/* ==== __break @ 0045a6dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a6dd-0045a6dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


