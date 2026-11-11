
/* ==== __break @ 0044f33d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044f33d-0044f33d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


