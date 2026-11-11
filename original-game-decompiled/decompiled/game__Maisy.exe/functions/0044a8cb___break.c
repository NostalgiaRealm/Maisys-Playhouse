
/* ==== __break @ 0044a8cb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a8cb-0044a8cb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


