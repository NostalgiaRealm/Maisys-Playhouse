
/* ==== __break @ 004667e2 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004667e2-004667e2
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


