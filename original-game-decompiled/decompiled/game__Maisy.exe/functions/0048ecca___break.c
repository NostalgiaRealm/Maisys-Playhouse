
/* ==== __break @ 0048ecca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048ecca-0048ecca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


