
/* ==== __break @ 0048882d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048882d-0048882d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


