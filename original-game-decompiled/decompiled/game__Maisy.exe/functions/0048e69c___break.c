
/* ==== __break @ 0048e69c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048e69c-0048e69c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


