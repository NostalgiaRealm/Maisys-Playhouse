
/* ==== __break @ 1401af8f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af8f-1401af8f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


