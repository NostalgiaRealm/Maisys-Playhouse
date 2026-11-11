
/* ==== __break @ 0044f388 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044f388-0044f388
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


