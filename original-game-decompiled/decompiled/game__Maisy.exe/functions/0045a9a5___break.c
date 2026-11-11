
/* ==== __break @ 0045a9a5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a9a5-0045a9a5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


