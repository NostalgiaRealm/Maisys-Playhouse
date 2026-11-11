
/* ==== __break @ 0048d367 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048d367-0048d367
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


