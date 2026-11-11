
/* ==== __break @ 0044f38d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044f38d-0044f38d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


