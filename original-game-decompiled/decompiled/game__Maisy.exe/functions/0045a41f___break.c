
/* ==== __break @ 0045a41f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a41f-0045a41f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


