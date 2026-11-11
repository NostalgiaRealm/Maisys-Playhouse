
/* ==== __break @ 0044f33c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044f33c-0044f33c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


