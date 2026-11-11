
/* ==== __break @ 1401af86 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af86-1401af86
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


