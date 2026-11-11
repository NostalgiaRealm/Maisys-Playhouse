
/* ==== __break @ 0048882f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048882f-0048882f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


