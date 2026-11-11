
/* ==== __break @ 0044bc94 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044bc94-0044bc94
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


