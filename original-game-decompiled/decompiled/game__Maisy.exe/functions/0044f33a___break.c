
/* ==== __break @ 0044f33a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044f33a-0044f33a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


