
/* ==== __break @ 0044f386 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044f386-0044f386
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


