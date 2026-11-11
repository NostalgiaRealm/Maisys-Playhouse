
/* ==== __break @ 0045a438 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a438-0045a438
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


