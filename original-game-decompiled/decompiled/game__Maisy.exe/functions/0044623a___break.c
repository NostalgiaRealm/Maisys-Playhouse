
/* ==== __break @ 0044623a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044623a-0044623a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


