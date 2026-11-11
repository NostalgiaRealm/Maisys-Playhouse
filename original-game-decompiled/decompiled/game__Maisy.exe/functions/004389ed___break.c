
/* ==== __break @ 004389ed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004389ed-004389ed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


